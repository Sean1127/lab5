#include <iostream>
#include <string>
using namespace std;

class HugeInt{
	friend istream &operator >>(istream &, HugeInt &);
	friend ostream &operator <<(ostream &, const HugeInt&);
	friend HugeInt &operator +(HugeInt &, HugeInt &);
	friend HugeInt &operator -(HugeInt &, HugeInt &);
public:
	HugeInt(int i = 0);
	HugeInt(string s);
	const HugeInt &operator =(const HugeInt &);
private:
	int num;
};
