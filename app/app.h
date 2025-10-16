#pragma once
#include <iostream>
#include <format>

namespace vsite::oop::v1 {
/*
* function declarations
*/
	std::string to_hex(int n);

	std::string to_exp(double d);

	void mult_table(int n, std::ostream& ss);
}
