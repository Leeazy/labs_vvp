#include <iostream>
#include <cmath>
using namespace std;
void F1() {
	cout << "Task 1\n";
	double n;
	cout << "input price ";
	cin >> n;
	cout << "0.1 kg = " << n / 10 << "\n0.2 kg = " << n * 0.2 << "\n0.3 kg = " << n * 0.3 << "\n0.4 kg = " << n * 0.4 << "\n0.5 kg = " << n * 0.5 << "\n0.6 kg = " << n * 0.6 << "\n0.7 kg = " << n * 0.7 << "\n0.8 kg = " << 0.8 * n << "\n0.9 kg = " << n * 0.9 << "\n1 kg = " << n << endl;
}
void F2() {
	cout << "Task 2\n";
	int n;
	double k = 1.1;
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		k = k * (k + 0.1);
	}
	cout << "multiplication = " << k << endl;
}
void F3() {
	cout << "Task 3\n";
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= (2*n-1); i += 2) {
		sum += i;
		cout << sum << endl;
	}
}
void F4() {
	cout << "Task 4\n";
	double a;
	int n, k = 0;
	cout << "input a, n = ";
	cin >> a >> n;
	for (int i = 0; i <= n; i++) {
		k = k + pow(a, i);
	}
	cout << k << endl;
}
void F5() {
	cout << "Task 5\n";
	double a, sum = 0;
	int n;
	cout << "input a, n = ";
	cin >> a >> n;
	for (int i = 0; i <= n; i++) {
		sum += pow(-1, i) * pow(a, i);
	}
	cout << sum << endl;
	
}
int main() {
	F1();
	F2();
	F3();
	F4();
	F5();
	return 0;
}