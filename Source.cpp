#include <cmath>
#include <iostream>
using namespace std;
int main() {
	cout << "When ax²+bx+c = 0 ... \n";
	double a, b, c;
	cout << "a = ", cin >> a, cout << "b = ", cin >> b, cout << "c = ", cin >> c;
	double d = pow(b, 2) - (4 * a * c);
	if (d < 0) { cout << "There are no solutions!"; }
	else if (d == 0) { cout << "x = " << (-b + sqrt(d)) / (a * 2); }
	else if (d > 0) { cout << "x = " << (-b + sqrt(d)) / (a * 2) << " and " << (-b - sqrt(d)) / (a * 2); }
}