#pragma once
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack &toCopy);
	virtual ~MutantStack();
	MutantStack &	operator = (MutantStack & toCopy);

	typedef T* iterator;

	MutantStack<T>::iterator	begin(void);
	MutantStack<T>::iterator	end(void);
protected:
private:
};

#include <MutantStack.ipp>