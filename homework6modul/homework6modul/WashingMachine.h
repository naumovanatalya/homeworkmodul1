#pragma once
#include "Appliances.h"

//класс стиральной машины
class WashingMachine final : public Appliances
{
public:
	//конструктор
	WashingMachine(int weight);
	//метод вывода возьмем из родительского класса, поэтому здесь описывать не буду
	//деструктор
	~WashingMachine();
};

