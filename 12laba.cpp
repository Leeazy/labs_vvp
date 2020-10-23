#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;
void F1() {
	setlocale(LC_ALL, "Rus");
	cout << "������� 1\n";
	int i, m, k, l;
	string month[12] = { "������", "�������", "�����", "������", "���", "����", "����", "�������", "��������", "�������", "������", "�������" };
	string number1[] = { "������", "������", "������", "���������", "�����", "������", "�������", "�������", "�������", "�������", "�������������",  "�����������", "�����������", "�������������", "�����������", "������������", "�����������", "���������������", "�������������" };
	string number2[] = { "��������", "��������" };
	cout << "input date, month ";
	cin >> i >> k;
	l = i % 10;
	m = i / 10;
	switch (m) {
	case 0:
		cout << number1[i - 1] << " ";
		break;
	case 1:
		cout << number1[i - 1] << " ";
		break;
	case 2:
		if (l == 0) {
			cout << "���������" << " ";
		}
		else {
			cout << number2[0] << " " << number1[l - 1] << " ";
		}
		break;
	case 3:
		if (l == 0) {
			cout << "���������" << " ";
		}
		else {
			cout << number2[1] << " " << number1[l - 1] << " ";
		}
		break;
	}
	cout << month[k - 1] << endl;
}

void F2() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������� 2\n" << "������� ����������� � ������� ";
	char c;
	int n;
	cin >> c >> n;
	switch (c) {
	case '�':
		if (n == 0) {
			cout << "�������� �����������" << endl;
		}
		else if (n == 1) {
			cout << "����� �����������" << endl;
		}
		else {
			cout << "�������� �����������" << endl;
		}
		break;
	case '�':
		if (n == 0) {
			cout << "����� �����������" << endl;
		}
		if (n == 1) {
			cout << "��������� �����������" << endl;
		}
		if (n == -1) {
			cout << "�������� �����������" << endl;
		}
		break;
	case '�':
		if (n == 0) {
			cout << "�������� �����������" << endl;
		}
		if (n == 1) {
			cout << "�������� �����������" << endl;
		}
		if (n == -1) {
			cout << "��������� �����������" << endl;
		}
		break;
	case '�':
		if (n == 0) {
			cout << "��������� �����������" << endl;
		}
		if (n == 1) {
			cout << "�������� �����������" << endl;
		}
		if (n == -1) {
			cout << "����� �����������" << endl;
		}
		break;
	}
}
void F3() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, a, b;
	cout << "������� 3\n" << "������� ���������� ������� ������� �� 10 �� 40 ";
	string number[] = { "������", "�����������", "����������", "����������", "������������", "����������", "�����������", "����������", "������������", "������������" };
	string teens[] = { "��������", "��������", "�����" };
	string units[] = { "����", "���", "���", "������", "����", "�����", "����", "������", "������" };
	cin >> n;
	a = n / 10;
	b = n % 10;
	switch (a) {
	case 1:
		cout << number[b] << " ������� �������" << endl;
		break;
	case 2:
		if (b == 0) {
			cout << teens[0] << " ������� �������" << endl;
		}
		else if (b == 1) {
			cout << teens[0] << " " << units[b - 1] << " ������� �������" << endl;
		}
		else if (b == 2 || b == 3 || b == 4) {
			cout << teens[0] << " " << units[b - 1] << " ������� �������" << endl;
		}
		else {
			cout << teens[0] << " " << units[b - 1] << " ������� �������" << endl;
		}
		break;
	case 3:
		if (b == 0) {
			cout << teens[1] << " ������� �������" << endl;
		}
		else if (b == 1) {
			cout << teens[1] << " " << units[b - 1] << " ������� �������" << endl;
		}
		else if (b == 2 || b == 3 || b == 4) {
			cout << teens[1] << " " << units[b - 1] << " ������� �������" << endl;
		}
		else {
			cout << teens[1] << " " << units[b - 1] << " ������� �������" << endl;
		}
		break;
	case 4:
		if (b == 0) {
			cout << teens[2] << " ������� �������" << endl;
		}
		else if (b == 1) {
			cout << teens[2] << " " << units[b - 1] << " ������� �������" << endl;
		}
		else if (b == 2 || b == 3 || b == 4) {
			cout << teens[2] << " " << units[b - 1] << " ������� �������" << endl;
		}
		else {
			cout << teens[2] << " " << units[b - 1] << " ������� �������" << endl;
		}
		break;
	}
}
void F4() {
	setlocale(LC_ALL, "Rus");
	int n, a, b, c;
	cout << "������� 4\n" << "������� ����� �� 100 �� 999 ";
	string number[] = { "", "����", "���", "���", "������", "����", "�����", "����", "������", "������", "������", "�����������", "����������", "����������", "������������", "����������", "�����������", "����������", "������������", "������������"};
	string teens[] = {"", "", "��������", "��������", "�����", "���������", "����������", "���������", "����������", "���������" };
	string hundreds[] = {"", "���", "������", "������", "���������", "�������", "��������", "�������", "���������", "���������" };
	cin >> n;
	a = n % 100 / 10;
	b = n % 10;
	c = n / 100;
	cout << hundreds[c] << " " << teens[a] << " " << number[b] << endl;
}
void F5() {
	setlocale(LC_ALL, "Rus");
	string color1[] = { "��������", "��������","�������", "������", "�������" };
	string color2[] = { "�������", "�������", "������", "�����", "������" };
	string animals[] = { "�����", "������", "�����", "�����", "�������", "����", "������", "����", "��������", "������", "������" , "������" };
	int year, d;
	cout << "������� 5\n" << "������� ��� ";
	cin >> year;
	year += 56;
	d = (year % 60) / 12;
	year = year % 12;
	if (year == 2 || year == 3 || year == 4) {
		cout << "��� " << color1[d] << " " << animals[year];
	}
	else {
		cout << "��� " << color2[d] << " " << animals[year];
	}
}
int main() {
	F1();
	F2();
	F3();
	F4();
	F5();
}