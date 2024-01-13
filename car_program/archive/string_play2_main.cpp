#include <iostream>
#include <string>

int main()
{
	std::string name {"Matrix"};
	std::string make {"Toyota"};
	int i_year {2009};
	std::string drive {"AWD"};
	int i_mpg {24};
	std::string year { std::to_string(i_year) };
	std::string mpg { std::to_string(i_mpg) };

	std::string stat {"INSERT INTO VEHICLES (name, make, year, drive, mpg)"};

	std::string vaStart {"Values ("};
	std::string vaEnd {")"};

	std::string cbaText {"', '"};
	std::string cbfText {"', "};
	std::string cafText {", '"};
	std::string cText {"'"};

	std::string vaNtext {", "};

	std::string stat2 { vaStart + cText + name + cbaText + make + cbfText + year + cafText + drive + cbfText + mpg + vaEnd };
	std::string stat3 {stat + " " + stat2};

	std::cout << stat3 << '\n';

	return 0;
}
