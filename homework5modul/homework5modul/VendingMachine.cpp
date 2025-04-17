#include "VendingMachine.h"

VendingMachine::VendingMachine()
{
}

VendingMachine::VendingMachine(int countTray)
{
	this->countTray = countTray;
	arrSnackSlot = new SnackSlot* [countTray];
	//заполняем пустыми значениями массив
	for (int i{}; i < countTray; i++) {
		arrSnackSlot[i] = nullptr;
	}
}

VendingMachine::~VendingMachine()
{
	for (int i{}; i < countTray; i++) {
		delete arrSnackSlot[i];
	}
	delete[] arrSnackSlot;
}

int VendingMachine::getcountSlot() const
{
	return countTray;
}

SnackSlot VendingMachine::getSnackSlot(int numberSlot) const
{
	if (numberSlot < 0 || numberSlot >= countTray) {
		cout << "Указанного лотка не существует" << endl;
		return SnackSlot();
	}
	else if (arrSnackSlot[numberSlot] == nullptr) {
		cout << "Указанный лоток пуст" << endl;
		return SnackSlot();
	}
	else {
		return *arrSnackSlot[numberSlot];
	}
}

void VendingMachine::setarrSnackSlot(SnackSlot snacktray, int numberSlot)
{
	if (numberSlot < 0 || numberSlot >= countTray) {
		cout << "Указанного лотка не существует" << endl;
	}
	else if (arrSnackSlot[numberSlot] == nullptr) {
		cout << "Указанный лоток пуст" << endl;
	}
	else {
		//удаляем значение, если оно было ранее
		delete arrSnackSlot[numberSlot];
		arrSnackSlot[numberSlot] = new SnackSlot(snacktray);
	}

}

void VendingMachine::addSlot(SnackSlot* snackslot)
{
	for (int i{}; i < countTray; i++) {
		if (arrSnackSlot[i] == nullptr) {
			arrSnackSlot[i] = snackslot;
			break;
		}
	}
}

int VendingMachine::getEmptySlotsCount() const
{
	int i = 0;
	for (int j{}; j < countTray; j++) {
		if (arrSnackSlot[j] == nullptr) {
			i++;
		}
	}
	return i;
}
