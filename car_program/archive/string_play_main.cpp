#include <sstream>
#include <iostream>
#include <string>

int main()
{
	std::string b {"hey"};
	std::string c {" are you"};
	char d {','};
	std::string e {" ready?"};

	std::string g {b + c + d + e};

	std::cout << g << '\n';

	return 0;
}
