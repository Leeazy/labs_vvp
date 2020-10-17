#include <iostream>
using namespace std;
void F1() {
	int N, min;
	double s;
	cout << "task 1" << endl;
	cout << "input seconds = ";
	cin >> s;
	min = (int)s / 60; // прошло минут с начала суток
	s = s / 60 - min;
	cout << "seconds = " << s << endl;
}
void F2() {
	cout << "task 2" << endl;
	int k, num;
	cout << "input k = ";
	cin >> k;
	num = k % 7;
	cout << "number of the day: " << num << endl;
}
void F3() {
	int N, num, k;
	cout << "task 3" << endl;
	cout << "input N, k = ";
	cin >> N >> k;
	num = k % 7 + (N - 1);
	cout << "number of the day: " << num << endl;
}
void F4() {
	int a, b, c, s_ab, s_c, count;
	cout << "task 4" << endl;
	cout << "input a, b, c = ";
	cin >> a >> b >> c;
	if (a >= c and b >= c) {
		s_ab = a * b;
		s_c = c * c;
		count = s_ab / s_c;
		cout << "count = " << count << endl;
	}
	else {
		cout << "count = " << 0 << endl;
	}
}
void F5() {
	int year, century;
	cout << "task 5" << endl;
	cout << "input year = ";
	cin >> year;
	century = year / 100 + 1;
	cout << "century = " << century;
}
int main() {
	F1();
	F2();
	F3();
	F4();
	F5();
}