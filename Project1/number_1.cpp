#include <iostream>
#include <cmath>
using namespace std;

int num_1(){
	double a, b, p, s;
	cin >> a >> b;
	p = 2 * (a + b);
	s = a * b;
	cout << "P=" << p << " " << "S=" << s;
}
int num_2(){
	double d, L, pi = 3.14;
	cin >> d;
	L = pi * d;
	cout << L;
}
int num_3(){
	double a, b, sr;
	cin >> a >> b;
	sr = (a + b) / 2;
	cout << sr;
}
int num_4(){
	double m, n, sum, comp, diff, pr;
	cin >> m >> n;
	sum = m * m + n * n;
	diff = m * m - n * n;
	comp = m * m * n * n;
	pr = m * m / n * n;
	cout << sum << " " << diff << " " << comp << " " << pr;
}
int num_5(){
	double t, r;
	cin >> t >> r;
	cout << fabs(t) + fabs(r) << " " << fabs(t) - fabs(r) << " " << fabs(t) * fabs(r) << " " << fabs(t) / fabs(r);
}
int main() {
	num_1();
	num_2();
	num_3();
	num_4();
	num_5();
	char temp;
	cin >> temp;
	return 0;
}