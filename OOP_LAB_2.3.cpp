#include "FuzzyNumber.h"

int main()
{
	FuzzyNumber A, B, C, D;

	std::cout << "Enter A: ";
	std::cin >> A;
	std::cout << "A: " << A;
	
	std::cout << "Enter B: ";
	std::cin >> B;
	std::cout << "B: " << B;

	std::cout << "A + B = " << A + B;
	std::cout << "A * B = " << A * B;

	return 0;
}