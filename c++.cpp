#include <iostream>
#include <cmath>
using namespace std;

class Point
{
	int x, y;
	friend void distance(Point o1, Point o2);

public:
	Point(int a, int b)
	{
		x = a;
		y = b;
	}

	void displayPoint()
	{
		cout << "The Point is (" << x << ", " << y << ")" << endl;
	}
};

void distance(Point o1, Point o2)
{
	int var1 = o2.x - o1.x;
	int var2 = o2.y - o1.y;
	int var3 = var1 ^ 2;
	int var4 = var2 ^ 2;
	int var5 = var3 + var4;
	cout << sqrt(var5) << endl;
}
int main()
{
	Point p(4, 3);
	p.displayPoint();
	Point q(3, -2);
	q.displayPoint();
	distance(p, q);
	return 0;
}
