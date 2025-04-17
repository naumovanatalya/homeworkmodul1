#pragma once
#include<iostream>
#include "bad_length.h"
#include "bad_range.h"

class IntegerArray
{
private:
	int _lenght{};
	int* m_data{};
public:
	//конструктор без параметров
	IntegerArray();
	//конструктор с параметром
	IntegerArray(int lenght);
	//деструктор
	~IntegerArray();
	//чистка массива
	void erasure();
	//перегрузка оператора [] для обращения по индексу
	int& operator[](int index);
	//геттер длины массива
	const int getlenght() const;
	//функция изменения размера массива с удалением элементов
	void reallocate(int newlenght);
	//функция изменения размера массива без удаления элементов
	void resize(int newlenght);
	//конструктор копирования
	IntegerArray(const IntegerArray& other);
	//конструктор присваивания
	IntegerArray& operator=(const IntegerArray& other);
	//функция вставки элемента, сначала вводится новое значение, а потом индекс куда его вставить
	void insertBefore(int value, int index);
	//функция удаления элемента
	void remove(int index);

	//вывод всех элементов контейнера
	void countArray();
	//функция замены элемента по индексу
	void Substitution(int value, int index);

	//функция вставки элемента в начало
	void insertBegin(int value);
	//функция вставки элемента в конец
	void insertEnd(int value);

	//функция поиска в контейнере элемента по значению, то есть поиск индекса элемента
	void searchArr(int value);
};

