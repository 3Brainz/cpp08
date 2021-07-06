#include <easyfind.hpp>

int main()
{
	std::array<int, 10> arr;
	
	std::cout << "size: " << arr.size() << std::endl;
	try
	{
		easyfind(arr, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	arr[7] = 1;
	std::cout << "size: " << arr.size() << std::endl;
	try
	{
		easyfind(arr, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}