#include <iostream>
#include <cmath>

using namespace std;

class point
{
public:
	double x;
	double y;

	static double dist(point p1, point p2) {
		double d;
		d = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
		return d;
	}
};

int main()
{
	system("pause");
	return 0;
}
