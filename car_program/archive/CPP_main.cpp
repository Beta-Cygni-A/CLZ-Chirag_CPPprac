#include "headers.h" // put all headers in here

int main
{
	mySTD::Nln(read(main_menu.txt)); //header only library file print.h is used. Plus read function has not been created.

	int input {};
	std::cin >> input;

	while(true)
	{
		switch(input)
		{
			case 1 //CreateVehicle is close to ready, just not sure how to return the object when the name is dynamic
				vehicle::CreateVehicle(input); //Create Vehicle
i				return true; // returning true to keep user on menu
			case 2
				user::CreateUser(input); //Create User
				return true;
			case 3
				data::ListUsers(input); //List all user(s) or only of specfic vehicle
				return true;
			case 4
				data::ShowLog(input); //Display log by user(s)
				return true;
			case 5
				data::AccessUserData(); //Manage user data: vehilce(s), miles driven, fuel bought
				return true;
			case 6
				data::ProgramInfo(); //License, notes from team, easter egg...
				return true;
			case 7
				return false; //exit program
			default:
			std::cerr << "Invalid input: " << input << '\n' << "THIS MESSAGE IS ON NEWLINE AFTER CERR OF INPUT";
			return true;
		}

	mySTD::prinT("Exiting Program", "\n");

	return 0;
}
