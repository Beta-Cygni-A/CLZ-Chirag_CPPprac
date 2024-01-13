#ifndef FUNC2_H
#define FUNC2_H

#include "headers.h"

int callback(void *NotUsed, int argc, char **argv, char **azColName);

int callback_table(void* a, int b, char** c, char** d);

template <typename... Q1>
inline void GetInfo(Q1&... args);

template <typename... Q1>
inline bool CheckInfo(const Q1&... args);

template <typename... Q1>
inline void Get_Check(Q1&&... args);

template <typename D1, typename D2>
inline void CreateVehicle(D1& ndb, D2& zErrMsg);

template <typename... Q1>
	
inline void GetInfo(Q1&... args)
{
	std::tuple<Q1&&...> arguments(std::forward<Q1>(args)...);
	mySTD::prinT(
		        std::get<0>(arguments),
			std::get<1>(arguments),
			std::get<2>(arguments)
		    );
	std::getline(std::cin, std::get<3>(arguments));
}

template <typename... Q1>

inline bool CheckInfo(const Q1&... args)
{
	std::string g {'E'};
	GetInfo("Is: ", args..., " correct? (y/n): ", g);
	return ((g == "y") ? true : false); 
}

template <typename... Q1>

inline void Get_Check(Q1&&... args)
{
	std::tuple<Q1&&...> arguments(std::forward<Q1>(args)...);

	GetInfo(
			std::get<0>(arguments),
			std::get<1>(arguments),
			std::get<2>(arguments),
			std::get<3>(arguments)
	       );
	
	bool cmp {CheckInfo(std::get<3>(arguments))};

	while(cmp == false)
	{
		GetInfo(
				std::get<0>(arguments),
				std::get<1>(arguments),
				std::get<2>(arguments),
				std::get<3>(arguments)
		       );
		cmp = CheckInfo(std::get<3>(arguments));
	}
}

template <typename D1, typename D2>

inline void CreateVehicle(D1& ndb, D2& zErrMsg)
{
	std::string mpg {};
	std::string year {};
	std::string name {};
	std::string make {};
	std::string drive {};


	Get_Check("Enter ", "Vehicle ", "Name: ", name);
	Get_Check("Enter ", "Vehicle ", "Make: ", make);
	Get_Check("Enter ", "Vehicle ", "Year: ", year);
	Get_Check("Enter ", "Vehicle ", "Drive Type (FWD, RWD, 4WD, AWD, Other): ", drive);
	Get_Check("Enter ", "Vehicle ", "MPG: ", mpg);

	std::string stat {"INSERT INTO VEHICLES (name, make, year, drive, mpg)"};

	std::string vaStart {"Values ("};
	std::string vaEnd {")"};
	
	std::string cbaText {"', '"};
	std::string cbfText {"', "};
	std::string cafText {", '"};

	std::string cText {"'"};
	std::string vaNtext {", "};

	std::string stat2 { stat + " " + vaStart + cText + name + cbaText + make + cbfText + year + cafText + drive + cbfText + mpg + vaEnd };
	char* stat3 = &stat2[0];

	year = sqlite3_exec(ndb, stat3, nullptr, nullptr, &zErrMsg);
}

#endif