#include "../include/headers.h"

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
};
