#include <iostream>
using namespace std;

void Func_1() {
	int A, B, temp;
	cout << "Completing task 6.1\n" << "input A, B\n";
	cin >> A >> B;
	temp = A;
	A = B;
	B = temp;
	cout << "A = " << A << " " << "B = " << B;
}
void Func_2() {
	int a, b, c, temp1, temp2;
	cout << "Completing task 6.2\n" << "input a, b, c\n";
	cin >> a >> b >> c;
	temp1 = c;
	temp2 = b;
	b = a;
	c = temp2;
	a = temp1;
	cout << "a = " << a << "b = " << b << "c = " << c;
}
void Func_3() {
	cout << "Completing task 6.3\n" << "input a, b, c\n";
	int a, b, c, temp1, temp2;
	cin >> a >> b >> c;
	temp1 = c;
	temp2 = b;
	b = a;
	c = temp2;
	a = temp1;
	cout << "a = " << a << "b = " << b << "c = " << c;
}
void Func_4() {
	double x, y;
	cout << "Completing task 6.4\n" << "input x\n";
	cin >> x;
	y = 3 * pow(x, 6) - 6 * x * x - 7;
	cout << "y = " << y;
}
void Func_5() {
	double x, y;
	cout << "Completing task 6.5\n" << "input x\n";
	cin >> x;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "y = " << y;
}
void Func_6() {
	cout << "Completing task 6.6\n" << "input A\n";
	double A, temp;
	temp = A * A; //a2
	A = temp * temp;//a4
	temp = A * A;//a8
	cout >> "A^8 = " >> temp;
}
void Func_7() {
	cout << "Completing task 6.7\n" << "input A\n";
	double A, temp1, temp2;
	temp1 = A * A; //a2
	temp2 = temp1 * A; //a3
	A = temp2 * temp2; //a6;
	temp1 = A * A; //a12
	A = temp2 * temp1; //a15
	cout << "A^15 = " << A;
}
int main() {
	Func_1();
	Func_2();
	Func_3();
	Func_4();
	Func_5();
	Func_6();
	Func_7();
	return 0;
}