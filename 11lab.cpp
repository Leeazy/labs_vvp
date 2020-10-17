#include <iostream>
#include <algorithm>
using namespace std;
void f1() {
	cout << "task 1" << endl;
	int a, b;
	cout << "input a, b = ";
	cin >> a >> b;
	if (a > b) {
		b = a;
	}
	else if (b > a) {
		a = b;
	}
	else {
		a = b = 0;
	}
	cout << "a = " << a << " " << "b = " << b << endl;
}	
void f2() {
	cout << "task 2" << endl;
	int m, s, k, sum = 0;
	cout << "input m, s, k ";
	cin >> m >> s >> k;
	if ((m > s && s > k) || (s > m && m > k)) {
		sum = m + s;
	}
	if ((k > s && s > m) || (s > k && k > m)) {
		sum = k + s;
	}
	if ((m > k && k > s) || (k > m && m > s)) {
		sum = m + k;
	}
	cout << sum << endl;
}
void f3() {
	cout << "task 3" << endl;
	double x1, y1, x2, y2, x3, y3, l_ab, l_ac;
	cout << "input coordinates a(x1, y1), b(x2, y2), c(x3, y3) = ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	l_ab = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	l_ac = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	if (l_ab > l_ac) {
		cout << "B " << "long = " << l_ab << endl;
	}
	else {
		cout << "C " << "long = " << l_ac << endl;
	}
}
void f4() {
	cout << "task 4" << endl;
	int x, y; 
	cout << "input x, y = ";
	cin >> x >> y;
	if (x > 0) {
		if (y > 0) {
			cout << "1 part" << endl;
		}
		else {
			cout << "4 part" << endl;
		}
	}
	else {
		if (y > 0) {
			cout << "2 part" << endl;
		}
		else {
			cout << "3 part" << endl;
		}
	}
}
void f5() {
	cout << "task 5" << endl;
	int a;
	cout << "input a = ";
	cin >> a;
	if (a > 0) {
		if (a % 2 == 0) {
			cout << "a - even and positive number" << endl;
		}
		else {
			cout << "a - not even, positive number" << endl;
		}
	}
	else if (a < 0) {
		if (a % 2 == 0) {
			cout << "a - even and negative number" << endl;
		}
		else {
			cout << "a - not even, negative number" << endl;
		}
	}
	else {
		cout << "a - zero number" << endl;
	}
}
void f6() {
	int a, n = 0;
	cout << "task 6" << endl;
	cout << "input a = ";
	cin >> a;
	if (a % 2 == 0) {
		while (a) {
			a /= 10;
			n++;
		}
		cout << "a - chetnoe, " << n << "-znachnoe chislo" << endl;
	}	
	else {
		while (a) {
			a /= 10;
			n++;
		}
		cout << "a - ne cnetnoe, " << n << "-znachnoe chislo";
	}	
}
int main() {
	f1();
	f2();
	f3();
	f4();
	f5();
	f6();
	return 0;
}
