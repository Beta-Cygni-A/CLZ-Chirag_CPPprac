Class Vehicle
{
private:
	int m_mpg {};
	int m_year {}; //included to help differentiate vehicles
	std::string m_name {};
	std::vector <int> m_users {};

public:
	Vehicle(int a, int b, std::string c, std::vector <int> d) //Vehicle Class Constructor
	: m_mpg { mpg }
	, m_year { year }
	, m_name { name }
	, m_users { user }


void NameVehicle(std::string& input) //probably should remove this one
{
	bool status {};
	while(status == true)
	{
		mySTD::prinT("Enter vehicle name: ");
		std::cout << std::cin.clear();
		std::getline(std::cin, input);
		mySTD::prinT("Is ", input, " the correct name? (true or false?): ");
		static_cast<bool>(std::cin) >> status;
	}
}

void GetYear()
{
	bool status {};
	while(status == true)
	{
		mySTD::Aln("Enter Vehicle Model Year: ");
		std::cout << std::cin.clear();
		std::getline(std::cin, year);
		mySTD::prinT("Is ", year, " the correct year? (true or false?): ");
		static_cast<bool>(std::cin) >> status;
	}
}

void GetMPG() //wondering whether I should make a function for the while loop, alot of that code is reused
{
	bool status {};
	while(status == true)
	{
		mySTD::Aln("Enter Vehicle MPG: ");
		std::cout << std::cin.clear();
		std::getline(std::cin, mpg);
		mySTD::prinT("Is ", mpg, " the correct mpg? (true or false?): ");
		static_cast<bool>(std::cin) >> status;
	}
}

void FinishVehicle()
{
	GetYear();
	GetMPG();
}

}; //end of class

void NameVehicle_Ret(std::string& input)
{
	bool status {};
	while(status == true)
	{
		mySTD::prinT("Enter vehicle name: ");
		std::cout << std::cin.clear();
		std::getline(std::cin, input);
		mySTD::prinT("Is ", input, " the correct name? (true or false?): ");
		static_cast<bool>(std::cin) >> status;
	}
}

Vehicle InitiateVehicle(std::string& input) //I should probably change std::string& to std::string_view for all function parameters
{
	std::map<std::string, Vehicle> vehicle; // https://stackoverflow.com/questions/35604399/whats-the-proper-way-to-let-the-user-enter-the-name-of-an-object-of-a-class-in
	return vehicle.emplace(NameVehicleRet(input), Vehicle{});
}
