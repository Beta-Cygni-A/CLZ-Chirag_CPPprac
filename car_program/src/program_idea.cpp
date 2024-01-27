#include "../include/headers.h"

int main()
{
	int input {};
	bool check {};// removal pending

	std::cout << "Welcome to the program! Enter the coresponding number for the action you would like to do: " << '\n';
	std::cout << "Load Data: (1)" << '\n';
	std::cout << "Settings - Info: (2)" << '\n';
	std::cout << "Exit: (3)" << '\n';
	std::cin >> input;

	while(true)
	{
		switch(input)
		{
			case 1 //load database then login as user and do stuff, main part of program
			LD_SUB_menu();
			return true;

			case 2 //settings/info
			LoadDatabase(Settings-Info)
			return true;

			case 3 //exit program
			return false;

			default:
			std::cerr << "Error, invalid input! Input was not between 1 - 3";
			return true;
		}
	}

	return 0;
}
