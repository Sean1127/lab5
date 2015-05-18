#include <iomanip>
#include <sstream>
#include "HUGEINT.h"
using namespace std;

istream &operator >>(istream & in, HugeInt & b)
{
	in >> b.num;
	return in;
}
ostream &operator <<(ostream & out, const HugeInt & b)
{
	out << b.num;
	return out;
}
HugeInt & operator +(HugeInt & a, HugeInt & b)
{
	b.num = a.num + b.num;
	return b;
}
HugeInt & operator -(HugeInt & a, HugeInt & b)
{
	a.num = a.num + b.num;
	return a;
}
const HugeInt & HugeInt::operator =(const HugeInt & right)
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
