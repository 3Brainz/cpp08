#include <easyfind.hpp>

int main()
{
	std::vector<int> arr;
	
	for (size_t i = 10; i < 100; i++)
	{
		arr.push_back(i);
	}
	std::cout << "size: " << arr.size() << std::endl;
	try
	{
		std::cout << *easyfind(arr, 1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	arr[7] = 1;
	std::cout << "size: " << arr.size() << std::endl;
	try
	{
		std::cout << *easyfind(arr, 1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}