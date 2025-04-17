#pragma once
#include<iostream>
#include<string>

using namespace std;

class Snack
{
	string nameSnack; //название снека
public:
	//конструктор по умолчанию
	Snack();

	//конструктор с параметрами
	Snack(string nameSnack);

	//конструктор копирования
	Snack(const Snack& other);
	//деструктор
	~Snack();

	//геттеры
	string getnameSnack() const;
	//сеттеры
	void setnameSnack(string nameSnack);

	//дружественная функция
	friend ostream& operator<<(ostream& output, const Snack& snack);
};