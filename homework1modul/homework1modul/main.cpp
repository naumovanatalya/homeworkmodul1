#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL,"");

	int a{}, b{};
	cout << "Введите два числа:" << endl;
	cin >> a >> b;
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / float(b) << endl;
	cout << a << " & " << b << " = " << (a & b) << endl;
	cout << a << " | " << b << " = " << (a | b) << endl;
	cout << a << " ^ " << b << " = " << (a ^ b) << endl;

}