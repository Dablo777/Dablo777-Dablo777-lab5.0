#include <iostream>
#include <cmath>
using namespace std;
double k(const double x, const double y); // прототип
int main()
{
	double p, q;
	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	double c = (k(1 + p * q, pow(q, 2)) + pow(k(p, pow(p, 2)), 2)) / (1 + k(p * q + pow(q, 2), p));
	cout << "c = " << c << endl;
	return 0;
}
double k(const double x, const double y) // визначення
{
	return (x / (1 + pow(sin(y), 2))) + (y / (1 + pow(x, 2)));
}