#include "VacuumCleaner.h"

VacuumCleaner::VacuumCleaner(int batteryLife, int weight) : Device(batteryLife), Appliances(weight)
{
}

void VacuumCleaner::ShowSpec()
{
	std::cout << "Время работы аккумулятора устройства: " << _batteryLife << std::endl;
	std::cout << "Вес бытовой техники: " << _weight << std::endl;
}
