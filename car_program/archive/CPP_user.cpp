Class User
{
private:


public:

std::string NameUser()
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

User CreateUser()
{
	std::map<std::string, User> user;
	return User.emplace(NameUser(), User{});
}

};
