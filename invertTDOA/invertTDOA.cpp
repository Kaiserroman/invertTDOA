#include <iostream>
#include <cmath>
#include <vector>

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

vector<point>  solution(point pA, point pB, point pC, point pD, point pE, point pF, double D_AB, double D_BC, double D_AC, double E_AB, double E_BC, double E_AC, double F_AB, double F_BC, double F_AC, int count) {

	//TODO: отдельная функция дифференцирования
	double dFxa = (pD.x - pA.x) * (point::dist(pD, pA) - point::dist(pD, pB) - D_AB) / point::dist(pD, pA) - (pD.x - pA.x) * (point::dist(pD, pA) - point::dist(pD, pC) - D_AC) / point::dist(pD, pA) - (pE.x - pA.x) * (point::dist(pE, pA) - point::dist(pE, pB) - E_AB) / point::dist(pE, pA) - (pE.x - pA.x) * (point::dist(pE, pA) - point::dist(pE, pC) - E_AC) / point::dist(pE, pA) - (pF.x - pA.x) * (point::dist(pF, pA) - point::dist(pF, pB) - F_AB) / point::dist(pF, pA) - (pF.x - pA.x) * (point::dist(pF, pA) - point::dist(pF, pC) - F_AC) / point::dist(pF, pA);
	double dFya = (pD.y - pA.y) * (point::dist(pD, pA) - point::dist(pD, pB) - D_AB) / point::dist(pD, pA) - (pD.y - pA.y) * (point::dist(pD, pA) - point::dist(pD, pC) - D_AC) / point::dist(pD, pA) - (pE.y - pA.y) * (point::dist(pE, pA) - point::dist(pE, pB) - E_AB) / point::dist(pE, pA) - (pE.y - pA.y) * (point::dist(pE, pA) - point::dist(pE, pC) - E_AC) / point::dist(pE, pA) - (pF.y - pA.y) * (point::dist(pF, pA) - point::dist(pF, pB) - F_AB) / point::dist(pF, pA) - (pF.y - pA.y) * (point::dist(pF, pA) - point::dist(pF, pC) - F_AC) / point::dist(pF, pA);
	double dFxb = (pD.x - pB.x) * (point::dist(pD, pA) - point::dist(pD, pB) - D_AB) / point::dist(pD, pB) - (pD.x - pB.x) * (point::dist(pD, pB) - point::dist(pD, pC) - D_BC) / point::dist(pD, pB) + (pE.x - pB.x) * (point::dist(pE, pA) - point::dist(pE, pB) - E_AB) / point::dist(pE, pB) - (pE.x - pB.x) * (point::dist(pE, pB) - point::dist(pE, pC) - E_BC) / point::dist(pE, pB) + (pF.x - pB.x) * (point::dist(pF, pA) - point::dist(pF, pB) - F_AB) / point::dist(pF, pB) - (pF.x - pB.x) * (point::dist(pF, pB) - point::dist(pF, pC) - F_BC) / point::dist(pF, pB);
	double dFyb = (pD.y - pB.y) * (point::dist(pD, pA) - point::dist(pD, pB) - D_AB) / point::dist(pD, pB) - (pD.y - pB.y) * (point::dist(pD, pB) - point::dist(pD, pC) - D_BC) / point::dist(pD, pB) + (pE.y - pB.y) * (point::dist(pE, pA) - point::dist(pE, pB) - E_AB) / point::dist(pE, pB) - (pE.y - pB.y) * (point::dist(pE, pB) - point::dist(pE, pC) - E_BC) / point::dist(pE, pB) + (pF.y - pB.y) * (point::dist(pF, pA) - point::dist(pF, pB) - F_AB) / point::dist(pF, pB) - (pF.y - pB.y) * (point::dist(pF, pB) - point::dist(pF, pC) - F_BC) / point::dist(pF, pB);
	double dFxc = (pD.x - pC.x) * (point::dist(pD, pB) - point::dist(pD, pC) - D_BC) / point::dist(pD, pC) + (pD.x - pC.x) * (point::dist(pD, pA) - point::dist(pD, pC) - D_AC) / point::dist(pD, pC) + (pE.x - pC.x) * (point::dist(pE, pB) - point::dist(pE, pC) - E_BC) / point::dist(pE, pC) + (pE.x - pC.x) * (point::dist(pE, pA) - point::dist(pE, pC) - E_AC) / point::dist(pE, pC) + (pF.x - pC.x) * (point::dist(pF, pB) - point::dist(pF, pC) - F_BC) / point::dist(pF, pC) + (pF.x - pC.x) * (point::dist(pF, pA) - point::dist(pF, pC) - F_AC) / point::dist(pF, pC);
	double dFyc = (pD.y - pC.y) * (point::dist(pD, pB) - point::dist(pD, pC) - D_BC) / point::dist(pD, pC) + (pD.y - pC.y) * (point::dist(pD, pA) - point::dist(pD, pC) - D_AC) / point::dist(pD, pC) + (pE.y - pC.y) * (point::dist(pE, pB) - point::dist(pE, pC) - E_BC) / point::dist(pE, pC) + (pE.y - pC.y) * (point::dist(pE, pA) - point::dist(pE, pC) - E_AC) / point::dist(pE, pC) + (pF.y - pC.y) * (point::dist(pF, pB) - point::dist(pF, pC) - F_BC) / point::dist(pF, pC) + (pF.y - pC.y) * (point::dist(pF, pA) - point::dist(pF, pC) - F_AC) / point::dist(pF, pC);

	//TODO: отдельная функция нормы
	double norm = sqrt(pow(dFxa, 2) + pow(dFya, 2) + pow(dFxb, 2) + pow(dFyb, 2) + pow(dFxc, 2) + pow(dFyc, 2));
	dFxa = dFxa / norm;
	dFya = dFya / norm;
	dFxb = dFxb / norm;
	dFyb = dFyb / norm;
	dFxc = dFxc / norm;
	dFyc = dFyc / norm;

	float c = 0.5; // зависит от расстояния между предположением и ответом

	pA.x = pA.x - c * dFxa;
	pA.y = pA.y - c * dFya;
	pB.x = pB.x - c * dFxb;
	pB.y = pB.y - c * dFyb;
	pC.x = pC.x - c * dFxc;
	pC.y = pC.y - c * dFyc;

	count++;
	if (count == 150) {
		vector<point> ans{ pA, pB, pC };
		return ans;
	}
	return solution(pA, pB, pC, pD, pE, pF, D_AB, D_BC, D_AC, E_AB, E_BC, E_AC, F_AB, F_BC, F_AC, count);
}

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

	vector<point> ans = solution(pA, pB, pC, pD, pE, pF, D_AB, D_BC, D_AC, E_AB, E_BC, E_AC, F_AB, F_BC, F_AC, 0);

	cout << "A: x = " << ans[0].x << " y = " << ans[0].y << endl;
	cout << "B: x = " << ans[1].x << " y = " << ans[1].y << endl;
	cout << "C: x = " << ans[2].x << " y = " << ans[2].y << endl;

	system("pause");
	return 0;
}
