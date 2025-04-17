#pragma once
#include<iostream>
#include<string>
#include "Device.h"

//класс электронных часов
class ElectronicWatch final : public Device
{
public:
	//конструктор
	ElectronicWatch(int batteryLife, std::string color);
	//метод вывода
	void ShowSpec() override;
	//деструктор
	~ElectronicWatch();
private:
	std::string _color; //цвет часов
};

