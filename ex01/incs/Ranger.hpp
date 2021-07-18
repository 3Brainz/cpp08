#pragma once
#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <array>
#include <iterator>

class Ranger
{
public:
	Ranger();
	Ranger(unsigned int len);
	Ranger(Ranger &toCopy);
	~Ranger();
	Ranger &	operator = (Ranger & toCopy);
	void		addNumber(int nu);
	unsigned	shortestSpan(void);
	unsigned	longestSpan(void);
	class		VectorFullException : public std::exception {const char * what() const throw();};
	class		NotEnoughNumbersException : public std::exception {const char * what() const throw();};
	void		addRange(int from, int to);
protected:

private:
	unsigned int			_len;
	std::vector<int>		_arr;
};

std::ostream & operator << (std::ostream & stream, Ranger &ranger);