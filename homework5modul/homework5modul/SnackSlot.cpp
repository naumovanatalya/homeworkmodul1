#include "SnackSlot.h"

SnackSlot::SnackSlot()
{
}

SnackSlot::SnackSlot(int maxcountSnack)
{
	this->maxcountSnack = maxcountSnack;
	arrSnack = new Snack* [maxcountSnack];
	for (int i{}; i < maxcountSnack; i++) {
		arrSnack[i] = nullptr; //инициализируем пустыми указателями
	}
}

SnackSlot::~SnackSlot()
{
	for (int i{}; i < this->maxcountSnack; i++) {
		delete arrSnack[i];
	}
	delete[] arrSnack;
}

int SnackSlot::getmaxcountSnack() const
{
	return maxcountSnack;
}

Snack SnackSlot::getarrsnack(int num) const
{
	if (num < 0 || num >= maxcountSnack) {
		cout << "Значение введено неверно, такого слота в лотке не существует" << endl;
		return Snack();
	}
	else if (arrSnack[num] == nullptr) {
		cout << "Указанный слот в лотке пуст" << endl;
		return Snack();
	}
	else {
		return *arrSnack[num];
	}
}

void SnackSlot::setarrsnack(Snack snack, int num){
	if (num < 0 || num >= maxcountSnack) {
		cout << "Значение введено неверно, такого слота в лотке не существует" << endl;
	}
	else {
		if (arrSnack[num] != nullptr) {
			delete arrSnack[num];
		}
		arrSnack[num] = new Snack(snack);
	}
}

void SnackSlot::addSnack(Snack *snack)
{
	for (int i{}; i < maxcountSnack; i++) {
		if (arrSnack[i] == nullptr) {
			arrSnack[i] = snack;
			break;
		}
	}
}