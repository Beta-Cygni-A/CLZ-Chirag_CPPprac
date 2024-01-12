#include <sqlite3.h>
#include <iostream>

int main()
{
	int input {};
	bool check {};

	std::cout << "Welcome to the program! Enter the coresponding number for the action you would like to do: " << '\n';
	std::cout << "New Vehicle: (1)" << '\n';
	std::cout << "Load Data: (2)" << '\n';
	std::cout << "Settings - Info: (3)" << '\n';
	std::cout << "Exit: (4)" << '\n';
	std::cin >> input;

	while(true)
	{
		switch(input)
		{
			case 1 //new database == vehicle
			CreateVehicle();
			return true

			case 2 //load database == vehicle/user
			LoadDatabase();
			return true;

			case 3 //settings/info == load database with info
			LoadDatabase(Settings-Info)
			return true;

			case 4 //exit program
			return false;

			default:
			std::cerr << "Error, invalid input! Input was not between 1 - 4";
			return true;
		}
	}

	return 0;
}
