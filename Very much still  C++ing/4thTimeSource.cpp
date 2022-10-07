#include <iostream>

int main() 
{
	int a = 0;
	int b = 0;
	float x = 0;
	float y = 0;

	std::cout << "Please input two integers" << std::endl;
	std::cin >> a;
	std::cin >> b;

	std::cout << "Please input two float" << std::endl;
	std::cin >> x;
	std::cin >> y;

	std::cout << a + b << " " << a - b << " " << a *b << " " <<  a / b << " " << std::endl;

	std::cout << x + y << " " << x - y << " " << x * y << " " << x / y << " " << std::endl;


	std::cout << a + y << " " << a - y << " " << a * y << " " << a / y << " " << std::endl;



}


