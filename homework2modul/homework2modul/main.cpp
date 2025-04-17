#include<iostream>

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
		cout << "Введите два числа, с которыми необходимо провести операцию" << endl;
		cin >> a >> b;
		switch (operato)
		{
		case '+': //сложение
			cout <<a<<" + "<<b<<" = "<< a + b << endl;
			break;

		case '-': //вычитание
			cout << a << " - " << b << " = " << a - b << endl;
			break;
		case '*': //умножение
			cout << a << " * " << b << " = " << a * b << endl;
			break;
		case '/': //деление
		{
			if (b == 0) {
				cout << "На ноль делить нельзя" << endl;
			}
			else {
				cout << a << " / " << b << " = " << a / b << endl;
			}
			break;
		}
		case '!': //факториал
		{
			int facta{ 1 };
			int factb{ 1 };
			for (int i{ 1 }; i <= a; i++) {
				facta *= i;
			}
			for (int i{ 1 }; i <= b; i++) {
				factb *= i;
			}
			cout << "!" << a << " = " << facta << endl;
			cout << "!" << b << " = " << factb << endl;
			break;
		}

		case '^': //возведение в степень
		{
			int i{1};
			int stepen{1};
			while (i<=b) {
				stepen *= a;
				i++;
			}
			cout << a << " в степени " << b << " = " << stepen << endl;
			break;
		}

		default:
			cout << "Символ введен неверно" << endl;
			break;
		}

		cout << "Для закрытия программы введите символ q.\nДля повторного запуска введите любой другой символ." << endl;
		cin >> operato;
	} while (operato != 'q');
	return 0;
}