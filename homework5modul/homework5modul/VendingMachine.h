#pragma once
#include<iostream>
#include<string>
#include "SnackSlot.h"

using namespace std;

class VendingMachine
{
//количество лотков
int countTray;
//переменная класса лотков со снеками
SnackSlot snackslot;
//массив лотков, помещенных в торговый автомат
SnackSlot** arrSnackSlot;
public:
//конструктор по умолчанию
VendingMachine();
//конструктор с параметрами
VendingMachine(int countTray);
//деструктор
~VendingMachine();

//геттеры
int getcountSlot() const; //вывести количество слотов для лотков
SnackSlot getSnackSlot(int numbersnack) const;
//сеттеры
void setarrSnackSlot(SnackSlot, int numbersnack);
//функция добавления слота в лоток
void addSlot(SnackSlot* snackslot);
//вывод пустых слотов
int getEmptySlotsCount() const;
};
