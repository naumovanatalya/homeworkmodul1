#include "Device.h"

Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}

void Device::ShowSpec()
{
	std::cout << "Время работы аккумулятора устройства: " << _batteryLife << std::endl;
}

Device::~Device() = default;
