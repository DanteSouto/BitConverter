
#include "program.h"

int main()
{
    lsvbs::data mydata;

    std::cout << "Testing Bit Converter\r\n";

    bool mybool = true;
    mydata = lsvbs::BitConverter::GetBytes(mybool);

    bool mybool2 = lsvbs::BitConverter::ToBool(mydata.buffer);
    std::cout << "bool to bits to bool. source:" + stringify<bool>(mybool) + " destiny:" + stringify<bool>(mybool2) + "\r\n";

    int myInt;
    myInt = 1234;
    mydata = lsvbs::BitConverter::GetBytes(myInt);
    int myInt2;
    myInt2 = lsvbs::BitConverter::ToInt(mydata.buffer);
    std::cout << "positive signed -> int to bits to int. source:" + stringify<int>(myInt) + " destiny:" + stringify<int>(myInt2) + "\r\n";

    myInt = -5473;
    mydata = lsvbs::BitConverter::GetBytes(myInt);
    myInt2 = lsvbs::BitConverter::ToInt(mydata.buffer);
    std::cout << "negative signed -> int to bits to int. source:" + stringify<int>(myInt) + " destiny:" + stringify<int>(myInt2) + "\r\n";

    long myLong;
    myLong = 14748364;
    mydata = lsvbs::BitConverter::GetBytes(myLong);
    long myLong2;
    myLong2 = lsvbs::BitConverter::ToLong(mydata.buffer);
    std::cout << "positive signed -> long to bits to long. source:" + stringify<long>(myLong) + " destiny:" + stringify<long>(myLong2) + "\r\n";

    myLong = -21474836;
    mydata = lsvbs::BitConverter::GetBytes(myLong);
    myLong2 = lsvbs::BitConverter::ToLong(mydata.buffer);
    std::cout << "negative signed -> long to bits to long. source:" + stringify<long>(myLong) + " destiny:" + stringify<long>(myLong2) + "\r\n";

    double myDouble = 9875.546;
    mydata = lsvbs::BitConverter::GetBytes(myDouble);
    double myDouble2;
    myDouble2 = lsvbs::BitConverter::ToDouble(mydata.buffer);
    std::cout << "positive signed -> double to bits to double. source:" + stringify<double>(myDouble) + " destiny:" + stringify<double>(myDouble2) + "\r\n";

    myDouble = -1234.546;
    mydata = lsvbs::BitConverter::GetBytes(myDouble);
    myDouble2 = lsvbs::BitConverter::ToDouble(mydata.buffer);
    std::cout << "negative signed -> double to bits to double. source:" + stringify<double>(myDouble) + " destiny:" + stringify<double>(myDouble2) + "\r\n";

    std::string s1 = "Hi Dante";
    mydata = lsvbs::BitConverter::GetBytes(s1);
    std::string s2 = lsvbs::BitConverter::ToString(mydata.buffer);
    std::cout << "string to bits to string: " + s1 + " " + s2 + "\r\n";

    std::time_t t1 = time(0);
    mydata = lsvbs::BitConverter::GetBytes(t1);
    std::time_t t2 = lsvbs::BitConverter::ToDateTime(mydata.buffer);
    std::cout << "date and time to bits to date and time: " + stringify(t1) + " " + stringify(t2) + "\r\n";

	return 0;
}

void testes()
{
    
}
