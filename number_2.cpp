#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void Func_1() {
	int x1, y1, x2, y2;
	double long_AB;
	cin >> x1 >> y1 >> x2 >> y2;
	long_AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << long_AB;
}
void Func_2() {
	int A, B, C;
	double long_AC, long_BC, sum;
	cin >> A >> B >> C;
	long_AC = abs(A - C);
	long_BC = abs(B - C);
	sum = long_AC + long_BC;
	cout << long_AC << " " << long_BC << " " << sum;
}
void Func_3() {
	int a, b, c, long_ac, long_bc, pr;
	cin >> a >> b >> c;
	if (c > a) {
		long_ac = c - a;
	}
	else {
		long_ac = a - c;
	}
	if (c > b) {
		long_bc = c - b;
	}
	else {
		long_bc = b - c;
	}
	pr = long_bc * long_ac;
	cout << long_ac << " " << long_bc << " " << pr;
}
void Func_4() {
	int x1, x2, y1, y2, x3, y3, x4, y4;
	double S, P, a, b;
	cin >> x1 >> y1 >> x2 >> y2;
	x3 = x1; // так как стороны параллельны осям
	y3 = y2;
	x4 = x2; 
	y4 = y1;
	a = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	S = a * b;
	P = (a + b) * 2;
	cout << S << " " << P;
}
void Func_5() {
	int x1, x2, y1, y2, x3, y3;
	double a, b, c, S, P, p;
	cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	P = a + b + c;
	p = P / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << S << " " << P;
}
int main() {
	Func_1();
	Func_2();
	Func_3();
	Func_4();
	Func_5();
	return 0;
}