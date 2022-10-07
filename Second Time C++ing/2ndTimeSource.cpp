#include <iostream>

int main()
{
	float alpha;
	float beta;
	float gamma;

	std::cout << "Input a number" << std::endl;

	std::cin >> alpha;
	std::cin >> beta;
	std::cin >> gamma;



	std::cout << gamma << std::endl;
	std::cout << beta << std::endl;
	std::cout << alpha << std::endl;

	std::cout << alpha << "+" << beta << "+" << gamma << " = " << alpha + beta + gamma << std::endl;

	std::cout << "Average = " << (alpha + beta + gamma) / 3 << std::endl;
}