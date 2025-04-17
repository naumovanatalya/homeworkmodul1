#include "ElectronicWatch.h"

ElectronicWatch::ElectronicWatch(int batteryLife, std::string color) : Device(batteryLife), _color(color)
{
}

void ElectronicWatch::ShowSpec()
{
	std::cout << "Время работы аккумулятора устройства: " << _batteryLife << std::endl;
	std::cout << "Цвет часов: " << _color << std::endl;
}

ElectronicWatch::~ElectronicWatch() = default;
