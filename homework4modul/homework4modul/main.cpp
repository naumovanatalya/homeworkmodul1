#include<iostream>
#include "calculate.h"
#include "switchv.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	char operato = 'q';
	do {

		cout << "Выберите математическую операцию:" << endl;
		cout << "+ - сложение\n"
			<< "- - вычитание\n"
			<< "* - умножение\n"
			<< "/ - деление\n"
			<< "! - факториал\n"
			<< "^ - возведение в степень" << endl;
		cin >> operato;
		int a{}, b{};
		do {
			cout << "Введите два целочисленных числа, с которыми необходимо провести операцию" << endl;
			cin >> a >> b;
			//проверка введены ли целочисленные значения
		} while (a < 0 || b < 0);
		
		SwitchAB(a, b, operato);

		cout << "Для закрытия программы введите символ q.\nДля повторного запуска введите любой другой символ." << endl;
		cin >> operato;
	} while (operato != 'q');
	return 0;
}