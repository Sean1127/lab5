#include <iomanip>
#include <sstream>
#include "HUGEINT.h"
using namespace std;

istream &operator >>(istream & in, HugeInt & b)
{
	in >> b.num2;
	return in;
}
ostream &operator <<(ostream & out, const HugeInt & b)
{
	out << b.num1 << b.num2;
	return out;
}
long long int operator +(HugeInt & a, HugeInt & b)
{
	long long int i = a.num2 + b.num2;
	return i;
}
string operator -(HugeInt & a, HugeInt & b)
{
	string s, s1, s2;
	stringstream ss;
	long long int i = a.num2 - b.num2;
	ss << a.num1;
	ss >> s1;
	ss << i;
	ss >> s2;
	s.append(s1);
	s.append(s2);
	return s;
}
const HugeInt & HugeInt::operator =(string s)
{
	stringstream ss;
	ss << s;
	if (s.size() < 18)
		ss >> num2;
	else
		ss >> setw(3) >> num1;
		ss >> setw(18) >> num2;
}
HugeInt::HugeInt(long long int i)
{
	num1 = 0;
	num2 = i;
}
HugeInt::HugeInt(string s)
{
	string temp;
	stringstream ss;
	ss << s;
	ss >> setw(1) >> temp;
	ss >> setw(3) >> num1;
	ss >> setw(18) >> num2;
}
