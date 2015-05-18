#include <iostream>
#include <string>
using namespace std;

class HugeInt{
	friend istream &operator >>(istream &, HugeInt &);
	friend ostream &operator <<(ostream &, const HugeInt&);
	friend long long int operator +(HugeInt &, HugeInt &);
	friend string operator -(HugeInt &, HugeInt &);
public:
	HugeInt(long long int i = 0);
	HugeInt(string s);
	const HugeInt &operator =(string);
private:
	int num1;
	long long int num2;
};
