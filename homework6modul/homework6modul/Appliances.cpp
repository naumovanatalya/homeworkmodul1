#include "Appliances.h"

Appliances::Appliances(int weight) : _weight(weight)
{
}

void Appliances::ShowSpec()
{
	std::cout << "Вес бытовой техники: " << _weight << std::endl;
}

Appliances::~Appliances() = default;