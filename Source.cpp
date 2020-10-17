#include <iostream>
using namespace std;
void Function1() {
	double a, rad;
	cout << "input angle in degrees:";
	cin >> a;
	rad = a * (3.14 / 180);
	cout << "in rad: " << rad << endl;
}
void Function2() {
	double rad, a, p = 3.14;
	cout << "input angle in rad: ";
	cin >> rad;
	a = rad * 180 / p;
	cout << "in degrees: " << a << endl;
}
void Function3() {
	double x, a, y, n;
	cout << "input x kg, " << "input rub per x kg, " << "input y kg " << endl;
	cin >> x >> a >> y;
	n = a / x;
	y = n * y;
	cout << "per 1 kg: " << n << "\n" << "per y kg: " << y << endl;
}
void Function4() {
	double v1, v2, s, t, s_new;
	cout << "input v1, input v2, input s, input t" << endl;
	cin >> v1 >> v2 >> s >> t;
	s_new = s + (v1 + v2) * t;
	cout << "s = " << s_new << endl;
}
void Function5() {
	double x, a, b;
	cout << "input a, b = ";
	cin >> a >> b;
	x = -b / a;
	cout << "x = " << x << endl;
}
void Function6() {
	double a1, b1, a2, b2, c1, c2, x, y, d_a, d_x, d_y;
	cout << "input a1, b1, c1, a2, b2, c2 ";
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	// kramer
	d_a = a1 * b2 - a2 * b1;
	d_x = c1 * b2 - c2 * b1;
	d_y = a1 * c2 - a2 * c1;
	x = d_x / d_a;
	y = d_y / d_a;
	cout << "x = " << x << " " << "y = " << y;
}	

int main() {
	Function1();
	Function2();
	Function3();
	Function4();
	Function5();
	Function6();
}