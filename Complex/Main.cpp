#include<iostream>
#include "complex.cpp"
#include "MyString.cpp"
#pragma warning(disable : 4996)  

using namespace std;
ostream& operator<<(ostream& os, const complex& x)
{
	return os << "¸´ÊýÎª" << "(" << x.real() << "," << x.imag() << ")" << endl;
}
std::ostream& operator<<(std::ostream& os, const String& str)
{
	os << str.get_c_str();
	return  os;
}

int main() 
{
	complex c1(9, 8);
	complex c2(c1+1);
	cout << c1<<c2<<endl;
	String str("hello");
	cout << str;
	cout << __cplusplus;

}