#pragma once
#include <iostream>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack &toCopy);
	MutantStack(std::stack<T> &toCopy);
	virtual ~MutantStack();
	MutantStack &	operator = (MutantStack<T> & toCopy);

	typedef T* iterator;

	MutantStack<T>::iterator	begin(void);
	MutantStack<T>::iterator	end(void);
protected:
private:
};

#include <MutantStack.ipp>