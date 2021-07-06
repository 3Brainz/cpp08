#include <banana.hpp>

banana::banana() : _len(0)
{
	_arr.clear();
}

banana::banana(unsigned int len) : _len(len)
{
	_arr.clear();
}

banana::~banana()
{
	_arr.clear();
}

banana::banana(banana &toCopy) : _len(toCopy._len)
{
	_arr.clear();
	std::vector<int>::iterator	ptr = toCopy._arr.begin();
	try
	{
		for (unsigned i = 0; i < _len; i++, ptr++)
			_arr.push_back(*ptr);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

banana &	banana::operator = (banana & toCopy)
{
	_len = toCopy._len;
	if (this != &toCopy)
	{
		_arr.clear();
		std::vector<int>::iterator	ptr = toCopy._arr.begin();
		try
		{
			for (unsigned i = 0; i < _len; i++, ptr++)
				_arr.push_back(*ptr);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (*this);
}

void	banana::addNumber(int nu)
{
	if (_arr.size() < _len)
	{
		_arr.push_back(nu);
		std::cout << "Added: " << nu << std::endl;
	}
	else
		throw (VectorFullException());
}

unsigned	banana::longestSpan(void)
{
	if (_arr.size() < 2)
		throw (NotEnoughNumbersException());
	std::vector<int>::iterator		ptrx = _arr.begin();
	std::vector<int>::iterator		ptry = ptrx++;
	unsigned						res = 0;

	for (ptrx = _arr.begin(); ptrx < _arr.end(); ptrx++)
	{
		for (ptry = ptrx; ptry < _arr.end(); ptry++)
		{
			if (static_cast<unsigned int>(std::abs(*ptry - *ptrx)) > res)
				res = (static_cast<unsigned int>(std::abs(*ptry - *ptrx)));
		}
	}
	return (res);
}

unsigned	banana::shortestSpan(void)
{
	if (_arr.size() < 2)
		throw (NotEnoughNumbersException());
	std::vector<int>::iterator		ptrx = _arr.begin();
	std::vector<int>::iterator		ptry = ptrx++;
	unsigned						res = 4294967295;

	for (ptrx = _arr.begin(); ptrx < _arr.end(); ptrx++)
	{
		for (ptry = ptrx; ptry < _arr.end(); ptry++)
		{
			if (static_cast<unsigned int>(std::abs(*ptry - *ptrx)) < res)
				res = (static_cast<unsigned int>(std::abs(*ptry - *ptrx)));
		}
	}
	return (res);
}

void		banana::addRange(int from, int to)
{
	if (from >= to)
		throw (std::exception());
	for (int i = from; i <= to; i++)
	{
		try
		{
			addNumber(i);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

const char * banana::VectorFullException::what() const throw ()
{
	return ("Vector is full");
}

const char * banana::NotEnoughNumbersException::what() const throw ()
{
	return ("Not enough numbers");
}
