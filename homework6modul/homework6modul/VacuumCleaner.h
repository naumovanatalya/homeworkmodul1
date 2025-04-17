#pragma once
#include<iostream>
#include "Device.h"
#include "Appliances.h"

//класс пылесоса
class VacuumCleaner final : public Device, Appliances
{
public:
	//конструктор
	VacuumCleaner(int batteryLife, int weight);
	//метод вывода
	void ShowSpec() override;
};

