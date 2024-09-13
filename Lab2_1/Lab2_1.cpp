#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, a, z1, z2;

	cout << "x = "; cin >> x;
	cout << "\na = "; cin >> a;

	z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
	//z2 = 2 * sqrt(2) * cos(a) * sin(((4 * atan(1.) / 4) + 2 * a));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;

}
