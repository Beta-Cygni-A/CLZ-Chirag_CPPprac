#include "../include/headers.h"

getNdatabase()
{
	std::cout << "Would you like to create new or load existing database: local (1) or Remote (2) : ";
	std::cin >> input;
	switch(input)
	{
		case 1
		LocalDatabase();
		
		case 2
		RemoteDatabse();
	}
}

int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
	for(int i {0}; i < argc; ++i)
	{
		std::cout << "%s = %s" << '\n' << (azColName[i] ? argv[i] : "NULL");
	}

	std::cout << '\n';

	return 0;
}

int callback_table(void* a, int b, char** c, char** d)
{
	static bool queryTitlePrint {true};

	if(queryTitlePrint)
	{
		for(int r {0}; r < b; ++r)
		{
			std::cout << d[r] << '\t';
		}

		std::cout << '\n';

		queryTitlePrint = false;
	}

	for(int r {0}; r < b; ++r)
	{
		std::cout << c[r] << '\t';
	}

	std::cout << '\n';
	return 0;
}
