#include <iostream>
#include <sqlite3.h>

int main()
{
	std::cout << "%s" << '\n' << sqlite3_libversion();

	return 0;
}
