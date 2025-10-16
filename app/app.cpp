#include "app.h"
#include <format>

namespace vsite::oop::v1
{
	/*
	* function implementations
	*/
	std::string to_hex(int n) {
		return std::format("{:X}", n);
	}

	std::string to_exp(double d) {
		return std::format("{:.2e}", d);
		// za vece komplikacije: sign + mantisa + "e" +(-) exponent
		// individualno izracinati sve djelove i spojiti u string
	}

	void mult_table(int n, std::ostream& ss) {
		// testiranje za 0 ili >20, u testu nemaju - brojevi 
		if (n == 0 || n > 20) {
			ss << "";
			return;
		}

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
				
				if (j <= n && j != 0) 
					ss << std::format("{:>4}", result); // razmak izmedu brojeva, ne na kraju reda
				else
					ss << result;
			}
			ss << "\n"; // novi red na kraju
		}
		;;
	}
	
} // namespace

