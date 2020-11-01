#include <iostream>
using namespace std;

void F1() {
	int a, b;
	cout << "Task 1\n";
	cout << "input a, b = ";
	cin >> a >> b;
	for (a; a <= b; a++) {
		for (int k = 0; k < a; k++) {
			cout << a << " ";
		}
	}
	cout << endl;
}
void F2() {
	int a, b, cnt = 0;
	cout << "Task 2\n";
	cout << "input a, b = ";
	cin >> a >> b;
	for (int i = b; i <= a; i += b) {
		cnt += 1;
	}
	if (cnt * b > a) {
		cout << a - (cnt - 1) * b << endl;
	}
	else {
		cout << a - cnt * b << endl;
	}
}
void F3() {
	int n, k = 0, sum = 0;
	cout << "Task 3\n";
	cout << "input n = ";
	cin >> n; 
	while (sum < n) {
		k++;
		sum += k;
	}
	cout << "k = " << k << " summa = " << sum << endl;
}
void F4() {
	int m = 0, s = 1000;
	double p;
	cout << "Task 4\n";
	cout << "input p = ";
	cin >> p;
	while (s <= 1100) {
		m++;
		s = s * (1 + p / 100);
	}
	cout << "months = " << m << " summa = " << s << endl;
}
void F5() {
	int a, b;
	cout << "Task 5\n";
	cout << "input a, b = ";
	cin >> a >> b;
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	cout << "NOD = " << a << endl;
}
void F6() {
	int n, k, F_k, F_k1, F_k2;
	cout << "Task 6\n";
	cout << "input n = ";
	cin >> n;
	F_k = 0;
	F_k1 = 1;
	F_k2 = 1;
	k = 2;
	while (n != F_k) {
		F_k = F_k1 + F_k2;
		F_k1 = F_k2;
		F_k2 = F_k;
		k++;
	}
	cout << "number of line = " << k;
}
int main() {
	F1();
	F2();
	F3();
	F4();
	F5();
	F6();
}