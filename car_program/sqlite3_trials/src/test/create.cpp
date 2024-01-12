#include "../../include/headers.h"

int main(int argc, char **argv)
{
	sqlite3 *db;
	char *zErrMsg {0};
	int rc;

	if(argc != 3)
	{
		std::fprintf(stderr, "Usage: %s DATABASE SQL-STATEMENT\n", argv[0]);
		return 1;
	}

	rc = sqlite3_open(argv[1], &db);

	if( rc )
	{
		std::fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		return 1;
	}

	rc = sqlite3_exec(db, argv[2], callback, 0, &zErrMsg);

	if ( rc!=SQLITE_OK )
	{
		std::fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}

	sqlite3_close(db);

	return 0;
}
