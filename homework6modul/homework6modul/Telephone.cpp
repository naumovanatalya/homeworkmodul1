#include "Telephone.h"

Telephone::Telephone(int batteryLife, std::string color) : Device(batteryLife), _color(color)
{
}

void Telephone::ShowSpec()
{
	std::cout << "Время работы аккумулятора устройства: " << _batteryLife << std::endl;
	std::cout << "Цвет телефона: " << _color << std::endl;
}

Telephone::~Telephone() = default;
