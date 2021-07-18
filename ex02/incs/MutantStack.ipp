
template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack &toCopy)
{
	std::vector<T>	tmp;
	if (this != &toCopy)
	{
		while (this->size()) 
		{
			this->pop();
		}
		while (toCopy.size())
		{
			tmp.push_back(toCopy.top());
			toCopy.pop();
		}
		std::reverse(tmp.begin(), tmp.end());
		for (int i = 0; i < static_cast<int>(tmp.size()); i++)
		{
			this->push(tmp[i]);
		}
		for (int i = 0; i < static_cast<int>(tmp.size()); i++)
		{
			toCopy.push(tmp[i]);
		}
	}
	tmp.clear();
}

template <typename T>
MutantStack<T>::MutantStack(std::stack<T> &toCopy)
{
	std::vector<T>	tmp;
	if (this != &toCopy)
	{
		while (this->size()) 
		{
			this->pop();
		}
		while (toCopy.size())
		{
			tmp.push_back(toCopy.top());
			toCopy.pop();
		}
		std::reverse(tmp.begin(), tmp.end());
		for (int i = 0; i < static_cast<int>(tmp.size()); i++)
		{
			this->push(tmp[i]);
		}
		for (int i = 0; i < static_cast<int>(tmp.size()); i++)
		{
			toCopy.push(tmp[i]);
		}
	}
	tmp.clear();
}

template <typename T>
MutantStack<T> &	MutantStack<T>::operator = (MutantStack & toCopy)
{
	std::vector<T>	tmp;
	if (this != &toCopy)
	{
		while (this->size()) 
		{
			this->pop();
		}
		while (toCopy.size())
		{
			tmp.push_back(toCopy.top());
			toCopy.pop();
		}
		std::reverse(tmp.begin(), tmp.end());
		for (int i = 0; i < static_cast<int>(tmp.size()); i++)
		{
			this->push(tmp[i]);
		}
		for (int i = 0; i < static_cast<int>(tmp.size()); i++)
		{
			toCopy.push(tmp[i]);
		}
	}
	tmp.clear();
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return(&this->top() - this->size() + 1);
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return(&this->top() + 1);
}