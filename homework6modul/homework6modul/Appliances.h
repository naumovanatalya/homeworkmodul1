#pragma once
#include <iostream>
#include "IElectroniks.h"

//класс бытовой техники
//добавление virtual для виртуального наследования
class Appliances : virtual public IElectroniks
{
public:
	//конструктор
	Appliances(int weight);
	//функция вывода веса бытовой техники
	virtual void ShowSpec() override;
	//деструктор
	virtual ~Appliances();

protected:
	int _weight; //вес бытовой техники
};

