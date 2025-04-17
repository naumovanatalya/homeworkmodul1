#include<iostream>
#include <string>
//подключаем файл со всеми заголовками
#include "countheader.h"

//стиральная машина - только вес +
//электронные часы - время работы акк и цвет +
//холодильник - вес +
//телефон - время работы акк и цвет +
//пылесос - время работы акк и вес - ромбовидная структура +




using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	bool noexit = true;
	int choice{};

	const int countshop = 5;

	IElectroniks* shop[countshop];
	shop[0] = new WashingMachine(30);
	shop[1] = new ElectronicWatch(48, string("Red"));
	shop[2] = new Fridge(60);
	shop[3] = new Telephone(48, string("Black"));
	shop[4] = new VacuumCleaner(2, 15);

	while (noexit) {

		cout << "Выберите технику:\n"
			<< "1 - стиральная машина\n"
			<< "2 - электронные часы\n"
			<< "3 - холодильник\n"
			<< "4 - телефон\n"
			<< "5 - пылесос\n"
			<< "Для выхода из программы введите 0" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			shop[0]->ShowSpec();
			cout << "-------------------------------------" << endl;
			break;
		case 2:
			shop[1]->ShowSpec();
			cout << "-------------------------------------" << endl;
			break;
		case 3:
			shop[2]->ShowSpec();
			cout << "-------------------------------------" << endl;
			break;
		case 4:
			shop[3]->ShowSpec();
			cout << "-------------------------------------" << endl;
			break;
		case 5:
			shop[4]->ShowSpec();
			cout << "-------------------------------------" << endl;
			break;
		case 0:
			noexit = false;
			break;
		default:
			cout << "Введено неверное число" << endl;
			cout << "-------------------------------------" << endl;
			break;
		}
	}

	//чистка памяти
	for (int i{}; i < countshop; i++) {
		delete shop[i];
	}
}