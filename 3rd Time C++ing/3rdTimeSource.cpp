#include <iostream>

int main()
{
	float radius;
	const float pi = 3.14;

	std::cout << "Input a floating point number...";
	std::cin >> radius;

	std::cout << "Area = " << pi * radius * radius << std::endl;
	std::cout << "Circumference = " << pi * 2 * radius << std::endl;



}