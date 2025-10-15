#pragma once
#include <string>
#include <iostream>
#include <sstream>

namespace vsite::oop::v1
{
/*
* function declarations
*/
	std::string to_hex(int n);

	std::string to_exp(double d);

	std::stringstream& mult_table(int n, std::stringstream& ss);
}
