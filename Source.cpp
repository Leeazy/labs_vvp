#include <iostream>
using namespace std;
void F1() {
	double a;
	cout << "input number in bytes: ";
	cin >> a;
	cout << "number in kilobytes: " << a / 1024 << endl;
}
void F2() {
	int a, b, count;
	cout << "input a, b = ";
	cin >> a >> b;
	count = a / b;
	cout << "count = " << count << endl;
}
void F3() {
	double l_z, m;
	int a, b;
	cout << "input a, b = ";
	cin >> a >> b;
	l_z = a / b;
	m = a - (b * l_z);
	cout << m << endl;
}
void F4() {
	int a;
	cout << "input a = ";
	cin >> a;
	a = a % 10 * 10 + (a / 10) % 10;
	cout << a << endl;
}
void F5() {
	int a, first, second, third;
	cout << "input a = ";
	cin >> a;
	first = (a / 100) % 10;
	second = (a / 10) % 10;
	third = a % 10;
	a = second * 100 + third * 10 + first;
	cout << a;
}
int main() {
	F1();
	F2();
	F3();
	F4();
	F5();
}