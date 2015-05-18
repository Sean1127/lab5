#include <iomanip>
#include <sstream>
#include "HUGEINT.h"
using namespace std;

istream &operator >>(istream & in, HugeInt & b)
{
	in >> b.num;
	return in;
}
ostream &operator <<(ostream & out, HugeInt & b)
{
	out << b.num;
	return out;
}
HugeInt & operator +(HugeInt & a, HugeInt & b)
{
	HugeInt temp;
	temp.num = a.num + b.num;
	return temp;
}
HugeInt & operator -(HugeInt & a, HugeInt & b)
{
	HugeInt temp;
	temp.num = a.num + b.num;
	return temp;
}
HugeInt & HugeInt::operator =(HugeInt & right)
{
	num = right.num;
}
HugeInt::HugeInt(int i)
{
	num = i;
}
HugeInt::HugeInt(string s)
{
	string temp;
	stringstream ss;
	ss << s;
	ss >> setw(1) >> temp;
	ss >> setw(21) >> num;
}
