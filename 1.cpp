#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void F1() {
	cout << "Completing task 1" << endl;
	int n, k, l;
	double sum = 0;
	cout << "input n, k, l = ";
	cin >> n >> k >> l;
	cout << "input array(n) = ";
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = k; i <= l; i++) {
		sum += a[i];
	}
	cout << "The arithmetic mean = " << sum / (l - k + 1) << endl;
}
void F2() {
	cout << "Completing task 2" << endl;
	int n, d = 0;
	bool flag = true;
	cout << "input n = ";
	cin >> n;
	cout << "input array(n) = ";
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (a[1] > a[0]) {
		d = a[1] - a[0];
	}
	if (a[0] > a[1]) {
		d = a[1] - a[0];
	}
	for (int i = 0; i < n-1; i++) {
		if (d > 0 && a[i+1] - a[i] == d) {
			
		}
		else if (d < 0 && a[i + 1] - a[i] == d){
			flag = true;
		}
		else {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "znametal' =  " << d << endl;
	}
	else {
		cout << 0 << endl;
	}
}
void F3() {
	cout << "Completing task 3" << endl;
	int n, min1, min2;
	cout << "input n = ";
	cin >> n;
	cout << "input array(n) = ";
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	min1 = min(a[2], a[4]);
	min2 = min(min1, a[6]);
	cout << "minimum = " << min2 << endl;
}
void F4() {
	cout << "Completing task 4" << endl;
	int n, max = 0;
	cout << "input n = ";
	cin >> n;
	cout << "input array(n) = ";
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n - 1; i++) {
		if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
			max = i;
		}
	}
	if (a[n - 1] > a[n - 2]) {
		max = n - 1;
	}
	cout << "number of local maximum = " << max << endl;
}
void F5() {
	cout << "Completing task 5" << endl;
	int n;
	cout << "input n = ";
	cin >> n;
	cout << "input array(n) = ";
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n-1; i++) {
		if (a[i] == a[i + 1]) {
			cout << i << " and " << i + 1;
		}
	}
}
int main() {
	F1();
	F2();
	F3();
	F4();
	F5();
	return 0;
}