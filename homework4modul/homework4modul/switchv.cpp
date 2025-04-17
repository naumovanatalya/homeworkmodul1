#include<iostream>
#include "calculate.h"
using namespace std;

void SwitchAB(int a, int b, char operato) {
	switch (operato)
	{
	case '+': //сложение
		sum(a, b);
		break;

	case '-': //вычитание
		min(a, b);
		break;
	case '*': //умножение
		umno(a, b);
		break;
	case '/': //деление
	{
		del(a, b);
		break;
	}
	case '!': //факториал
	{
		cout << "!" << a << " = " << fact(a) << endl;
		cout << "!" << b << " = " << fact(b) << endl;
		break;
	}

	case '^': //возведение в степень
	{
		cout << a << " в степени " << b << " = " << stepen(a, b) << endl;
		break;
	}

	default:
		cout << "Символ введен неверно" << endl;
		break;
	}
}