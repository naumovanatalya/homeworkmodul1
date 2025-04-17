#include<iostream>
#include<string>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snikers");
	cout << *bounty <<endl;
	cout << *snickers << endl;

	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);

	cout << slot->getarrsnack(0) << endl;
	cout << slot->getarrsnack(1) << endl;
	cout << slot->getarrsnack(2) << endl;
	cout << "_________________________________________" << endl;


	VendingMachine* machine = new VendingMachine(15 /*Количество слотов для снеков*/);
	machine->addSlot(slot); // Помещаем слот обратно в аппарат

	cout << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}