#BitConverter Clone in C++
Program inspired in .NET BitConverter function.
###Current supported types:
•	Bool;
•	Int
•	Long
•	Double
•	std:string;
•	Std::time_t

###Usage
Use “BitConverter::GetBytes([variable])” to convert any supported type do byte array. 
The byte array is encapsulated by de “data” structure defined in data.h. The data structure (data.buffer) is an array of unsigned char.
To convert byte array back to one off the supported types, use the respective function:
...
unsigned char[] BitConverter::GetBytes([variable])
bool BitConverter::ToBool([byte array])
int BitConverter::ToInt([byte array])
long BitConverter::ToLong([byte array])
double BitConverter::ToDouble([byte array])
time_t BitConverter::ToDateTime([byte array])
string BitConverter::ToString([byte array])
...
