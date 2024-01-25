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
	point pA, pB, pC, pD, pE, pF;

	//Значения точек для проверки:
	pA.x = 0; //25
	pA.y = 0; //-15
	pB.x = 0; //20
	pB.y = 0; //20
	pC.x = 0; //-32
	pC.y = 0; //12
	pD.x = -36;
	pD.y = 30;
	pE.x = 18;
	pE.y = 14;
	pF.x = -10;
	pF.y = -30;

	double D_AB = 18.916, D_BC = 38.447, D_AC = 57.363, E_AB = 23.508, E_BC = -43.715, E_AC = -20.207, F_AB = -20.231, F_BC = 10.897, F_AC = -9.334;

	system("pause");
	return 0;
}
