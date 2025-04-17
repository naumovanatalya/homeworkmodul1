#include "Snack.h"

Snack::Snack()
{
}

Snack::Snack(string nameSnack)
{
	this->nameSnack = nameSnack;
}

Snack::Snack(const Snack& other)
{
	this->nameSnack = other.nameSnack;
}

Snack::~Snack()
{
}

string Snack::getnameSnack() const
{
	return nameSnack;
}

void Snack::setnameSnack(string nameSnack)
{
	this->nameSnack = nameSnack;
}

ostream& operator<<(ostream& output, const Snack& snack)
{
	output << "Название снека: " << snack.nameSnack << endl;
	return output;
}
