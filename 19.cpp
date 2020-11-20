#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
void F1() {
	cout << "Completing task 1" << endl;
	cout << "Input n = ";
	int n;
	cin >> n;
	vector <int> a(n);
	vector <int> b;
	cout << "Input array(n) = ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		if (a[i] == a[i + 1]) {
			b.push_back(a[i]);
			i++;
		}
		else if (a[i] != a[i + 1]) {
			b.push_back(a[i]);
			if (i + 1 == n - 1) {
				b.push_back(a[i + 1]);
			}
		}
	}
	for (int i = 0; i < b.size(); i++) {
		cout << b[i] << " ";
	}
	cout << endl;
}
void F2() {
	cout << "Completing task 2" << endl;
	vector <int> a = {1, 1, 3, 4, 5, 5, 6, 7, 7};
	for (int i = 0; i < a.size() - 1; i++) {
		if (a[i] == a[i + 1]) {
			auto begin = a.cbegin();
			a.erase(begin + i, begin + i + 2);
		}
	}
	cout << "New Size = " << a.size() << endl;
	for (int i = 0; i < a.size(); i++) {
		
		cout << a[i] << " ";
	}
	cout << endl;
}
void F3() {
	cout << "Completing task 3" << endl;
	int n, min = 1000000000, max = -1000000000, max_i = -1, min_i = -1;
	cout << "Input n = ";
	cin >> n;
	vector <int> a;
	cout << "Input array(n) = ";
	int f;
	for (int i = 0; i < n; i++) {
		cin >> f;
		a.push_back(f);
		if (a[i] < min) {
			min = a[i];
			min_i = i;
		}
		if (a[i] > max) {
			max = a[i];
			max_i = i;
		}
	}
	a.emplace(a.cbegin() + min_i, 0);
	a.emplace(a.cbegin() + max_i + 2, 0);
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void F4() {
	int n, f;
	cout << "Completing task 4" << endl;
	cout << "Input n = ";
	cin >> n;
	vector <int> a;
	cout << "Input array(n) = ";
	for (int i = 0; i < n; i++) {
		cin >> f;
		a.push_back(f);
	}
	for (int i = 0; i < a.size(); i++) {
		if (a[i] < 0) {
			a.emplace(a.cbegin() + i + 1, 0);
		}
	}
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void F5() {
	int n, f;
	cout << "Completing task 5" << endl;
	cout << "Input n = ";
	cin >> n;
	vector <int> a(n);
	vector <int> b;
	cout << "Input array(n) = ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			b.push_back(0);
			b.push_back(a[i]);
		}
		else if (a[i] < 0) {
			b.push_back(a[i]);
		}
	}
	for (int i = 0; i < b.size(); i++) {
		cout << b[i] << " ";
	}
	cout << endl;
}
int main() {
	F1();
	F2();
	F3();
	F4();
	F5();
	return 0;
}