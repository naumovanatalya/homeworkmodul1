#pragma once
#include<iostream>
#include "IElectroniks.h"

//класс электронных устройств
//добавление virtual для виртуального наследования
class Device : virtual public IElectroniks
{
public:
	//конструктор
	Device(int batteryLife);
	//метод вывода времени работы аккумулятора
	virtual void ShowSpec() override;
	//деструктор
	virtual ~Device();
protected:
	int _batteryLife; //время работы аккумулятора устройства
};

