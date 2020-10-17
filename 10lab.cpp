#include <iostream>
using namespace std;
void f1() {
	int a, b;
	cout << "task 1" << endl;
	cout << "input a, b = ";
	cin >> a >> b;
	if (a > 2 && b <= 3) {
		cout << "Right" << endl;
	}
	else {
		cout << "Not right" << endl;
	}
}	
void f2() {
	int a, b, c;
	cout << "task 2" << endl;
	cout << "input a, b, c = ";
	cin >> a >> b >> c;
	if (a < b < c) {
		cout << "Right" << endl;
	}
	else {
		cout << "Not right" << endl;
	}
}
void f3() {
	int a;
	cout << "task 3" << endl;
	cout << "input a = ";
	cin >> a;
	if (a % 2 == 0 && a / 100 == 0 && a / 10 != 0) {
		cout << "The number is even and two-digit " << endl;
	}
	else {
		cout << "Not right" << endl;
	}
}
void f4() {
	int a, f, b, m;
	cout << "task 4" << endl;
	cout << "input a = ";
	cin >> a;
	f = a % 10; b = a / 10 % 10; m = a / 100 % 10;
	if (f > b > m || m > b > f) {
		cout << "The numbers form the desired sequence" << endl;
	}
	else {
		cout << "Not right" << endl;
	}
}
void f5() {
	cout << "task 5" << endl;
	int k;
	cout << "input k = ";
	cin >> k;
	if (k % 10 == k / 1000 % 10 && k / 100 % 10 == k / 10 % 10) {
		cout << "Right" << endl;
	}
	else {
		cout << "Not right" << endl;
	}
}
void f6() {
	cout << "task 6" << endl;
	int a, b, c;
	cout << "input a, b, c = ";
	cin >> a >> b >> c;
	if (a * a + b * b == c * c || c * c + b * b == a * a || a * a + c * c == b * b) {
		cout << "Right triangle" << endl;
	}
	else {
		cout << "Not right triangle" << endl;
	}
}
void f7() {
	int a, b, c;
	cout << "task 7" << endl;
	cout << "input a, b, c = ";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && c + b > a) {
		cout << "The triangle exist" << endl;
	}
	else {
		cout << "The triangle not exist" << endl;
	}
}

int main() {
	f1();
	f2();
	f3();
	f4();
	f5();
	f6();
	f7();
}