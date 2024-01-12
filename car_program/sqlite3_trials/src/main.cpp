#include "../include/headers.h"
#include <string>

int main()
{
	sqlite3 *ndb;

	char *zErrMsg {0};
	int rc {0};
	std::string temp {""};

	const char* cte {"CREATE TABLE VEHICLES"
		         "("
	                         "name  TEXT,"
	                         "make  TEXT,"
	                         "year  INTEGER,"
	                         "drive TEXT,"
	                         "mpg   INTEGER"
			 ");"
	                };

	rc = sqlite3_open("test.db", &ndb);

	if( rc )
	{
		std::fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(ndb));
		return 1;
	}

	rc = sqlite3_exec(ndb, cte, nullptr, nullptr, &zErrMsg);

	if ( rc!=SQLITE_OK )
	{
		std::fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}

	cte = (
		"INSERT INTO VEHICLES (name, make, year, drive, mpg)"
		"VALUES ('Matrix', 'Toyota', 2009, 'AWD', 24)"
	      );

	rc = sqlite3_exec(ndb, cte, nullptr, nullptr, &zErrMsg);

	cte = ("SELECT * FROM VEHICLES;");

	sqlite3_exec(ndb, cte, callback_table, 0, &zErrMsg);
	
	sqlite3_close(ndb);

	return 0;
}
