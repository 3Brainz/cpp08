#include <MutantStack.hpp>
#include <list>

int main()
{
	{
		std::stack<int>	stdS;

		stdS.push(1);
		stdS.push(2);
		stdS.push(3);
		stdS.push(4);
		stdS.push(5);
		stdS.push(6);
		std::cout << "stdS contains 1 2 3 4 5 6" << std::endl << "now copying stdS in a mutant stack called a" << std::endl;
		MutantStack<int>	a(stdS);
		MutantStack<int>::iterator it = a.begin();
		MutantStack<int>::iterator ite = a.end();
		++it;
		--it;
		std::cout << "iterator test: OK" << std::endl;
		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "creating b stack copying a" << std::endl;
		MutantStack<int>	b(a);
		std::cout << "pushing also 6 7 in the b stack" << std::endl;
		b.push(6);
		b.push(7);
		std::cout << "a:" << std::endl;
		it = a.begin();
		ite = a.end();
		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "b:P" << std::endl;
		it = b.begin();
		ite = b.end();
		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "now testing equal, try ing to make b = to a" << std::endl;
		b = a;
		it = b.begin();
		ite = b.end();
		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
}