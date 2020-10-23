#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;
void F1() {
	setlocale(LC_ALL, "Rus");
	cout << "Задание 1\n";
	int i, m, k, l;
	string month[12] = { "января", "февраля", "марта", "апреля", "мая", "июня", "июля", "августа", "сентября", "октября", "ноября", "декабря" };
	string number1[] = { "первое", "второе", "третье", "четвертое", "пятое", "шестое", "седьмое", "восьмое", "девятое", "десятое", "одинннадцатое",  "двенадцатое", "тринадцатое", "четырнадцатое", "пятнадцатое", "шестнадцатое", "семнадцатое", "восемнадцататое", "девятнадцатое" };
	string number2[] = { "двадцать", "тридцать" };
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
			cout << "двадцатое" << " ";
		}
		else {
			cout << number2[0] << " " << number1[l - 1] << " ";
		}
		break;
	case 3:
		if (l == 0) {
			cout << "тридцатое" << " ";
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
	cout << "Задание 2\n" << "Введите направление и команду ";
	char c;
	int n;
	cin >> c >> n;
	switch (c) {
	case 'З':
		if (n == 0) {
			cout << "Западное направление" << endl;
		}
		else if (n == 1) {
			cout << "Южное направление" << endl;
		}
		else {
			cout << "Северное направление" << endl;
		}
		break;
	case 'Ю':
		if (n == 0) {
			cout << "Южное направление" << endl;
		}
		if (n == 1) {
			cout << "Восточное направление" << endl;
		}
		if (n == -1) {
			cout << "Западное направление" << endl;
		}
		break;
	case 'С':
		if (n == 0) {
			cout << "Северное направление" << endl;
		}
		if (n == 1) {
			cout << "Западное направление" << endl;
		}
		if (n == -1) {
			cout << "Восточное направление" << endl;
		}
		break;
	case 'В':
		if (n == 0) {
			cout << "Восточное направление" << endl;
		}
		if (n == 1) {
			cout << "Северное направление" << endl;
		}
		if (n == -1) {
			cout << "Южное направление" << endl;
		}
		break;
	}
}
void F3() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, a, b;
	cout << "Задание 3\n" << "Введите количество учебных заданий от 10 до 40 ";
	string number[] = { "десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать" };
	string teens[] = { "двадцать", "тридцать", "сорок" };
	string units[] = { "одно", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
	cin >> n;
	a = n / 10;
	b = n % 10;
	switch (a) {
	case 1:
		cout << number[b] << " учебных заданий" << endl;
		break;
	case 2:
		if (b == 0) {
			cout << teens[0] << " учебных заданий" << endl;
		}
		else if (b == 1) {
			cout << teens[0] << " " << units[b - 1] << " учебное задание" << endl;
		}
		else if (b == 2 || b == 3 || b == 4) {
			cout << teens[0] << " " << units[b - 1] << " учебных задания" << endl;
		}
		else {
			cout << teens[0] << " " << units[b - 1] << " учебных заданий" << endl;
		}
		break;
	case 3:
		if (b == 0) {
			cout << teens[1] << " учебных заданий" << endl;
		}
		else if (b == 1) {
			cout << teens[1] << " " << units[b - 1] << " учебное задание" << endl;
		}
		else if (b == 2 || b == 3 || b == 4) {
			cout << teens[1] << " " << units[b - 1] << " учебных задания" << endl;
		}
		else {
			cout << teens[1] << " " << units[b - 1] << " учебных заданий" << endl;
		}
		break;
	case 4:
		if (b == 0) {
			cout << teens[2] << " учебных заданий" << endl;
		}
		else if (b == 1) {
			cout << teens[2] << " " << units[b - 1] << " учебное задание" << endl;
		}
		else if (b == 2 || b == 3 || b == 4) {
			cout << teens[2] << " " << units[b - 1] << " учебных задания" << endl;
		}
		else {
			cout << teens[2] << " " << units[b - 1] << " учебных заданий" << endl;
		}
		break;
	}
}
void F4() {
	setlocale(LC_ALL, "Rus");
	int n, a, b, c;
	cout << "Задание 4\n" << "Введите число от 100 до 999 ";
	string number[] = { "", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять", "десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"};
	string teens[] = {"", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемдесят", "девяносто" };
	string hundreds[] = {"", "сто", "двести", "триста", "четыреста", "пятьсот", "шестьсот", "семьсот", "восемьсот", "девятьсот" };
	cin >> n;
	a = n % 100 / 10;
	b = n % 10;
	c = n / 100;
	cout << hundreds[c] << " " << teens[a] << " " << number[b] << endl;
}
void F5() {
	setlocale(LC_ALL, "Rus");
	string color1[] = { "зеленого", "красного","желтого", "белого", "черного" };
	string color2[] = { "зеленой", "красной", "желтой", "белой", "черной" };
	string animals[] = { "крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезьяны", "курицы", "собаки" , "свиньи" };
	int year, d;
	cout << "Задание 5\n" << "Введите год ";
	cin >> year;
	year += 56;
	d = (year % 60) / 12;
	year = year % 12;
	if (year == 2 || year == 3 || year == 4) {
		cout << "год " << color1[d] << " " << animals[year];
	}
	else {
		cout << "год " << color2[d] << " " << animals[year];
	}
}
int main() {
	F1();
	F2();
	F3();
	F4();
	F5();
}