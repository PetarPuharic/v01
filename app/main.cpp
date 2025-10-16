#include "app.h"
#include <format>
#include <iostream>
#include <sstream>
#include <fstream>

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int nekiBroj;
	std::cout << "Unesite neki broj (tipa int): ";
	std::cin >> nekiBroj;

	std::cout << vsite::oop::v1::to_hex(nekiBroj);

	std::cout << "\n";

	vsite::oop::v1::mult_table(nekiBroj, std::cout);
}
		