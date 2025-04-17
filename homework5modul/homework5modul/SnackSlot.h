#pragma once
#include<iostream>
#include<string>
#include "Snack.h"

using namespace std;

class SnackSlot
{
	int maxcountSnack{};
	Snack** arrSnack;
public:
	//конструктор по умолчанию
	SnackSlot();
	
	//конструктор с параметрами
	SnackSlot(int maxcountSnack);
	
	//деструктор
	~SnackSlot();

	//геттеры
	int getmaxcountSnack() const;
	Snack getarrsnack(int num) const;
	//сеттер
	void setarrsnack(Snack snack, int num);
	//добавление снека в слот
	void addSnack(Snack *snack);
};

