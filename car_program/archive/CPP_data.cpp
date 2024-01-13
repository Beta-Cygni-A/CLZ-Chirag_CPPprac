Class Data
{
private:

public:

	std::string GetUsername()
	{
	        std::string input {};

	        for(bool status {false}; status == true, --status)
	        {
		                mySTD::prinT("Enter username: ", "\n");
		                std::getline(std::cin, input);
		                std::cout << CLEARBUFFER;
		                mySTD::prinT("Is ", input, " the correct name? (true or false?): ");
		                static_cast<bool>(std::cin) >> status;
	        }
	        return input;
	}

AccessUserData()
{	
	std::string user {GetUsername()};
	mySTD::prinT(UserMenu.txt;
	int input {};
	std::cin >> input;

	switch(input)
	case 1
	AddMiles();
	case 2
	AddGas();
	case 3
	ViewLog();
	case 4
	Owe();
	case 5
	Summary();
	default:
	return 1;
}

};
