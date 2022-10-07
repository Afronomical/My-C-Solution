#include <iostream>
#include <string>

int command(std::string prompt)
{
	int inputVal;
	std::cout << prompt << " ";

	std::cin >> inputVal;

	return inputVal;
}

int main()
{
	int alpha = 0;
	int beta = 0;
	int gamma = 0;

	alpha = command("Input a number...");
	beta = command("Input a number...");
	gamma = command("Input a number...");

	
	
	

	std::cout << gamma << std::endl;
	std::cout << beta << std::endl;
	std::cout << alpha << std::endl;

	std::cout << alpha << "+" << beta << "+" << gamma << " = " << alpha + beta + gamma <<  std::endl;

	std::cout << "Average = " << (alpha + beta + gamma) / 3 << std::endl;
}




