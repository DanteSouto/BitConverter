# BitConverter Clone in C++

Inspired in .NET BitConverter function.

## Current supported data types:

* bool;
* int;
* long;
* double;
* std::string;
* std::time_t.

## Usage

Use **BitConverter::GetBytes([variable])** to convert any supported data type into byte array. 
The byte array is encapsulated by de “data” structure defined in data.h. The data structure (data.buffer) is an array of unsigned char.

To convert byte array back to one off the supported types, use the respective function:

> unsigned char[] BitConverter::GetBytes([variable])
> 
> bool BitConverter::ToBool([byte array])
> 
> int BitConverter::ToInt([byte array])
> 
> long BitConverter::ToLong([byte array])
> 
> double BitConverter::ToDouble([byte array])
> 
> time_t BitConverter::ToDateTime([byte array])
> 
> string BitConverter::ToString([byte array])

## Meta

Dante Souto – [@dantesouto](https://twitter.com/dantesouto)

Distributed under the MIT license. See ``LICENSE`` for more information.

[https://github.com/DanteSouto/](https://github.com/DanteSouto/)
