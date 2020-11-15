#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void F1() {
	int n = 6;
	cout << "Completing task 1" << endl;
	int a[6] = {1, 2, 3, 4, 5, 6};
	int b[6] = {7, 8, 9, 10, 11, 12};
	int c[6] = {};
	for (int i = 0; i < n; i++) {
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
}
void F2() {
	cout << "Completing task 2" << endl;
	int n;
	double sum = 0, sr;
	cout << "input n = ";
	cin >> n;
	cout << "array(n) = ";
	vector <int> a(n);
	vector <double> b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i <= k; i++) {
			sum += a[i];
		}
		sr = sum / (k + 1);
		b[k] = sr;
		sum = 0;
	}
	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
}
void F3() {
	cout << "Completing task 3" << endl;
	int n, nechet;
	cout << "input n = ";
	cin >> n;
	cout << "array(n) = ";
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 != 0) {
			nechet = a[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			a[i] += nechet;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void F4() {
	cout << "Completing task 4" << endl;
	int n, min_i, max_i, min = 10000000000, max = -100000000000;
	cout << "input n = ";
	cin >> n;
	cout << "array(n) = ";
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < min) {
			min = a[i];
			min_i = i;
		}
		if (a[i] > max) {
			max = a[i];
			max_i = i;
		}
	}
	if (max_i > min_i) {
		for (int i = min_i + 1; i < max_i; i++) {
			a[i] = 0;
		}
	}
	else if (min_i > max_i) {
		for (int i = max_i + 1; i < min_i; i++) {
			a[i] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void F5() {
	cout << "Completing task 5" << endl;
	int n, tmp;
	cout << "input n = ";
	cin >> n;
	cout << "array(n) = ";
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n-1; i++) {
		if (a[i + 1] < a[i]) {
			tmp = a[i + 1];
			a[i + 1] = a[i];
			a[i] = tmp;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	F1();
	F2();
	F3();
	F4();
	F5();
}