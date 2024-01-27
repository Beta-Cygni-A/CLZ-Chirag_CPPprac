#include "../include/headers.h"

int main()
{
	sqlite3 *ndb; // database is given a name for use in program, in this case, ndb

	char *zErrMsg {0}; // for error messages
	int rc {0}; // also for error catching
	std::string temp {""};
	//below is a c-style string containing SQL code that creates a table named vehicles along with strings and integers for storage of info
	const char* cte {"CREATE TABLE VEHICLES"
		         "("
	                         "name  TEXT,"
	                         "make  TEXT,"
	                         "year  INTEGER,"
	                         "drive TEXT,"
	                         "mpg   INTEGER"
			 ");"
	                };

	rc = sqlite3_open("bin/test.db", &ndb); //opening database ndb, which if not found will be created. File name is test.db
	//below we look at the value of rc to see if we succesfully opened the database
	if( rc )
	{
		std::fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(ndb));
		return 1;
	}

	rc = sqlite3_exec(ndb, cte, nullptr, nullptr, &zErrMsg); //executing that SQL code in c-style string cte

	if ( rc!=SQLITE_OK )
	{
		std::fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	//cte is given new SQL code that adds a entry to the vehicle table in the database
	cte = (
		"INSERT INTO VEHICLES (name, make, year, drive, mpg)"
		"VALUES ('Matrix', 'Toyota', 2009, 'AWD', 24)"
	      );

	rc = sqlite3_exec(ndb, cte, nullptr, nullptr, &zErrMsg); //executing new sql code

	cte = ("SELECT * FROM VEHICLES;"); // new sql code that will be used to print vehicles table

	sqlite3_exec(ndb, cte, callback_table, 0, &zErrMsg); //executing that code and a function that loops through the table

	//take user input and put it in database
	CreateVehicle(ndb, zErrMsg);

	sqlite3_close(ndb); //closing database

	return 0;
}
