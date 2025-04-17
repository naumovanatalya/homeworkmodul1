#pragma once
#include "Appliances.h"

//класс холодильника
class Fridge final : public Appliances
{
public:
	//конструктор
	Fridge(int weight);
	//метод вывода возьмем из родительского класса
	//деструктор
	~Fridge();
};

