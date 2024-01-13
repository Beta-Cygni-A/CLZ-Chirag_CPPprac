#ifndef PRINT_H
#define PRINT_H

#include <iostream>
#include <string_view>

class Functest //for testing inline class member functions
{
private: 
	int m_a {};

public:
	Functest(int a)
		: m_a { a }
	{}
	
	template <typename... Q1>

	inline void print(const Q1&... args);

};

	template <typename... Q1>

	inline void Functest::print(const Q1&... args)
	{	        
		((std::cout << [&args]() { return ((args == "nLN") ? "\n" : (args == "nSP") ? " " : args);}() << ""), ...);
	}

//End of Class

namespace mySTD // for implementing features wanted and knockoffs of features currently unavailable to me
{
	template <typename... Q1>

	inline void printAln(const Q1&... args) //takes any number of arguments and puts a space after eachone
	{
	        ((std::cout << args << " "), ...);
	}

	template <typename... Q1>

	inline void printNln(const Q1&... args) //takes any number of arguments and puts a newline after eachone
	{
	        ((std::cout << args << "\n"), ...);
	}

//Old Function
/*
	inline auto checkArgs(const auto& args)
	{
		return ((args == "\n") ? "\n" : (args == "") ? " " : args);
	}
*/
	template <typename... Q1>

	inline void prinT(const Q1&... args) //takes any number of arguments. Pass "" for a space, "\n" newline, or nospace by passing neither.
	{	        
		((std::cout << [&args]() { return ((args == "\n") ? "\n" : (args == "") ? " " : args);}() << ""), ...);

// Old function call		
//		((std::cout << checkArgs(args) << ""), ...);
	}
};

#endif
