#pragma once

//абстрактный класс магазина электроники - нужен будет для создания массива
class IElectroniks
{
public:
	virtual void ShowSpec() = 0;
	virtual ~IElectroniks() = default;
};

