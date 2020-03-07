#include<iostream>
using namespace std;

class Garvit
{
private:
	int a;
	int b;

public:
	int c;
	int d;
	void getData();
	void setData(int a1, int b1);
};

void Garvit::setData(int a1, int b1)
{
	a = a1;
	b = b1;
}

void Garvit::getData()
{
	cout << "The value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	cout << "The value of c is " << c << endl;
	cout << "The value of d is " << d << endl;
}
int main()
{
	int y = 1;
	int z = 2;
	Garvit Sharma;
	Sharma.c = 1;
	Sharma.d = 2;
	Sharma.setData(y, z);
	Sharma.getData();
	return 0;
}