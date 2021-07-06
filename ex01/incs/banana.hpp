#pragma once
#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <array>
#include <iterator>

class banana
{
public:
	banana();
	banana(unsigned int len);
	banana(banana &toCopy);
	~banana();
	banana &	operator = (banana & toCopy);
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
