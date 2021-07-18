#include <Ranger.hpp>

int main()
{
	Ranger	test(10000);
	char 	a;

	try
	{
		std::cout << test << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	test.addRange(0, 10);
	try
	{
		std::cout << test << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "insert a char:" << std::endl;
	std::cin >> a;
	test.addRange(0, 10000);
	try
	{
		std::cout << test << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}