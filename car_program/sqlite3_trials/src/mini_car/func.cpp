CreateVehicle()
{
//have to add checking for eachone, if user says correct, then move on, else clearbuffer and retry

	std::string STRinput {};
	int INTinput {};
//func name
	std::cout << "Enter the name of your vehicle: ";
	std::cin >> STRinput;

	//create database with STRinput value name
	STRinput = "Empty";
//func make
	std::cout << "Enter the make of your vehicle: ";
	std::getline(std::cin, STRinput);
	//edit database
	
	STRinput = "Empty";
//func year
	std::cout << "Enter the make year of your vehicle: ";
	std::cin >> INTinput;
	//edit database
	
	STRinput = 0;
//func type
	std::cout << "What type of drive is your vehicle (4WD, RWD, FWD, AWD...) : ";
	std::getline(std::cin, STRinput);
	//edit database
	
	STRinput = 0;
}
