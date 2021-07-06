#pragma once

#include <iostream>
#include <exception>
#include <array>


class	findException : public std::exception
{
	const char * what() const throw()
	{
		return("not found");
	};
};

// template <class T>
// int	easyfind(T container, int toFind)
// {
// 	unsigned i = 0;

// 	while (i < container.size())
// 	{
// 		if (container[i] == toFind)
// 			return (container[i]);
// 		i++;
// 	}
// 	throw (findException());
// }

template <typename T>
typename T::iterator	easyfind(T container, int toFind)
{
	typename T::iterator ptr = container.begin();

	for (ptr = container.begin() ; ptr < container.end(); ptr++)
	{
		if (*ptr == toFind)
			return (ptr);
	}
	throw (findException());
}