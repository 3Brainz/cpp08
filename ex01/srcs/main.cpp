#include <banana.hpp>

int main()
{
	banana	we(10000);
	char 	a;

	try
	{
		std::cout << we.longestSpan() << "   " << we.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	we.addRange(0, 10);
	try
	{
		std::cout << we.longestSpan() << "   " << we.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cin >> a;
	we.addRange(0, 10000);
	try
	{
		std::cout << we.longestSpan() << "   " << we.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}