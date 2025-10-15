#include "app.h"
#include <format>
#include <sstream>

namespace vsite::oop::v1
{
	/*
	* function implementations
	*/
	std::string to_hex(int n) {
		std::string hex_chars = "0123456789ABCDEF";
		if (n == 0) return "0";
		std::string result;
		while (n > 0) {
			int remainder = n % 16;
			result = hex_chars[remainder] + result; // [] -> pointer, mozemo zbrajat sa pointerima ovjde, micemo ga za +result
			n /= 16;
		}

		return result;
	}

	std::string to_exp(double d) {
		return std::format("{:.2e}", d);
		// za vece komplikacije: sign + mantisa + "e" +(-) exponent
		// individualno izracinati sve djelove i spojiti u string
	}

	std::stringstream& mult_table(int n, std::stringstream& ss) {
		// testiranje za 0 ili >20, u testu nemaju - brojevi 
		if (n == 0 || n > 20) { ss.str(""); return ss;}

		//tablica ima n+1 redaka i stupaca

		for (int i = 0; i <= n; i++) { // redovi
			for (int j = 0; j <= n; j++) { // stupci
				if (i == 0 && j == 0) {
					// tu ja da popraci prvi broj u tablici
					ss << "0";
					continue;
				}
				
				int result = (i == 0) ? j : (j == 0) ? i: i * j;  // if u ifu, samo skracen nacin
				/*
					if (i == 0) result = j; 
					else if (j == 0) result = i; 
					else result = i * j; 
				*/
				std::string gap = (result < 10) ? "   " : (result < 100) ? "  " : " "; // if u if, prvo neisitna pa istina.
				if (j <= n && j != 0) ss << gap; // razmak izmedu brojeva, ne na kraju reda
				ss << result;
			}
			ss << "\n"; // novi red na kraju
		}
		
		// Finalna tablica 
		return ss;
	}
	
} // namespace

