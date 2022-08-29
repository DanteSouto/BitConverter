#pragma once
#include "globais.h"
#include "data.h"
#include <iostream>

// Dante Souto - 2022
// dantesouto@gmail.com

namespace lsvbs 
{
	class BitConverter
	{
	
	public:
		static long ToBool(bytes value);
		static long ToInt(bytes value);
		static long ToLong(bytes value);
		static double ToDouble(bytes value);
		static std::time_t ToDateTime(bytes value);
		static std::string ToString(bytes value);

		static data GetBytes(bool value);
		static data GetBytes(int value);
		static data GetBytes(long value);
		static data GetBytes(double value);
		static data GetBytes(std::time_t value);
		static data GetBytes(std::string value);
	
	private:
		// Disallow creating an instance of this object
		BitConverter() {}
	};
}


