#ifndef HEADERS_H
#define HEADERS_H

#include <sqlite3.h>
#include <iostream>
#include <string>

int callback(void *NotUsed, int argc, char **argv, char **azColName);

int callback_table(void* a, int b, char** c, char** d);

#endif
