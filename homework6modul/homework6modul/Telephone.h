#pragma once
#include<iostream>
#include<string>
#include "Device.h"

//класс телефона
class Telephone final : public Device
{
public:
	//конструктор
	Telephone(int batteryLife, std::string color);
	//метод вывода
	void ShowSpec() override;
	//деструктор
	~Telephone();

private:
	std::string _color;
};

