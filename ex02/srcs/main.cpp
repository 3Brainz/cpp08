#include <MutantStack.hpp>
#include <list>

int main()
{
	// {
		// MutantStack<int>    mstack;

	// 	mstack.push(5);
	// 	mstack.push(17);

	// 	std::cout << mstack.top() << std::endl;

	// 	mstack.pop();

	// 	std::cout << mstack.size() << std::endl;

	// 	mstack.push(3);
	// 	mstack.push(5);
	// 	mstack.push(737);
	// 	mstack.push(4);

	// 	MutantStack<int>::iterator it = mstack.begin();
	// 	MutantStack<int>::iterator ite = mstack.end();

	// 	++it;
	// 	--it;

	// 	while(it != ite)
	// 	{
	// 		std::cout << *it << std::endl;
	// 		++it;
	// 	}

	// 	std::stack<int> s(mstack);
	// }

	// std::cout << std::endl;

	// {
	// 	std::list<int>	mstack;

	// 	mstack.push_back(5);
	// 	mstack.push_back(17);

	// 	std::cout << mstack.back() << std::endl;

	// 	mstack.pop_back();

	// 	std::cout << mstack.size() << std::endl;

	// 	mstack.push_back(3);
	// 	mstack.push_back(5);
	// 	mstack.push_back(737);
	// 	mstack.push_back(4);

	// 	std::list<int>::iterator it = mstack.begin();
	// 	std::list<int>::iterator ite = mstack.end();

	// 	++it;
	// 	--it;

	// 	while(it != ite)
	// 	{
	// 		std::cout << *it << std::endl;
	// 		++it;
	// 	}
	// }

	{
		std::stack<int>	s;

		s.push(5);
		s.push(17);

		std::cout << s.top() << std::endl;

		s.pop();

		std::cout << s.size() << std::endl;

		s.push(3);
		s.push(5);
		s.push(737);
		s.push(4);

		std::cout << std::endl;
		
		MutantStack<int>	mstack(s);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::cout << std::endl;

		MutantStack<int>	sasso(mstack);

		sasso.push(54);
		sasso.push(45);

		it = mstack.begin();

		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::cout << std::endl;

		it = sasso.begin();
		ite = sasso.end();

		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::cout << std::endl;

		sasso = mstack;

		it = mstack.begin();
		ite = mstack.end();

		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::cout << std::endl;

		it = sasso.begin();
		ite = sasso.end();

		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
}