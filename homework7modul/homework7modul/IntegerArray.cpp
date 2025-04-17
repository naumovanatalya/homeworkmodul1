#include "IntegerArray.h"

IntegerArray::IntegerArray() = default;

IntegerArray::IntegerArray(int lenght) : _lenght(lenght)
{
	//если длина массива меньше нуля или равно нулю то вызовется исключение
	if (lenght <= 0) {
		throw bad_length(); 
	}
	if (lenght > 0) {
		m_data = new int[lenght];
	}
}

IntegerArray::~IntegerArray() {
	delete[] m_data;
}

void IntegerArray::erasure() {
	delete[] m_data;
	m_data = nullptr;
	_lenght = 0;
}

int& IntegerArray::operator[](int index) {
	if (index < 0 || index >= _lenght) {
		throw bad_range();
	}
	return m_data[index];
}

const int IntegerArray::getlenght() const
{
	return _lenght;
}

void IntegerArray::reallocate(int newlenght)
{
	erasure();
	if (newlenght <= 0) {
		throw bad_length();
	}
	m_data = new int[newlenght];
	_lenght = newlenght;
}

void IntegerArray::resize(int newlenght)
{
	//если массив уже имеет текущую длину то ничего не делать, возврат
	if (_lenght == newlenght) {
		return;
	}
	//если изменяем размер на нулевой
	if (newlenght <= 0) {
		erasure();
		return;
	}
	//добавляем новый временный массив для копирования элементов нашего старого массива
	int* m_data_temp = new int[newlenght];
	if (_lenght > 0) {
		//определяем наименьший массив для копирования элементов
		int elementsToCopy{ (_lenght > newlenght) ? newlenght : _lenght };
		//копируем из начального массива количество элементов elementsToCopy в новый массив
		std::copy_n(m_data, elementsToCopy, m_data_temp);
		//чистим массив старый
		delete[] m_data;
		//переносим указатель на новый массив в старый
		m_data = m_data_temp;
		//актуализируем длину массива
		_lenght = newlenght;
	}

}

IntegerArray::IntegerArray(const IntegerArray& other) : IntegerArray(other.getlenght())
{
	std::copy_n(other.m_data, _lenght, m_data);
}

IntegerArray& IntegerArray::operator=(const IntegerArray& other)
{
	if (&other == this) {
		return *this;
		reallocate(other.getlenght());
		std::copy_n(other.m_data, _lenght, this->m_data);
		return *this;
	}

}

void IntegerArray::insertBefore(int value, int index)
{
	//проверка входит ли индекс в диапазон
	if (index < 0 || index > _lenght) {
		throw bad_range();
	}
	//создаем новый временный массив с длиной больше на один чем у изначального
	int* m_data_temp = new int[_lenght + 1];
	//скопируем все элементы во временный массив до введенного индекса
	std::copy_n(m_data, index, m_data_temp);
	//присвоим введенное значение для введенного индекса
	m_data_temp[index] = value;
	//скопируем остальные элементы после введенного индекса
	std::copy_n(m_data + index, _lenght - index, m_data_temp + index + 1);
	//чистим начальный массив
	delete[] m_data;
	//присваиваем массиву указатель на временный массив
	m_data = m_data_temp;
	//актуализируем длину
	++_lenght;
}

void IntegerArray::remove(int index)
{
	//проверка корректности индекса
	if (index < 0 || index >= _lenght) {
		throw bad_range();
	}
	//если это последний элемент в массиве, то удалить его и выйти
	if (_lenght == 1) {
		erasure();
		return;
	}
	//создаем новый временный массив
	int* m_data_temp = new int[_lenght - 1];
	//копируем до указанного индекса массива
	std::copy_n(m_data, index, m_data_temp);
	//копируем отстальные элементы массива, пропуская(удаляя) указанный по индексу элемент
	std::copy_n(m_data + index + 1, _lenght - index - 1, m_data_temp + index);
	//чистим старый массив
	delete[] m_data;
	//присваиваем массиву указатель на временный массив
	m_data = m_data_temp;
	//актуализируем длину
	--_lenght;
}

void IntegerArray::countArray()
{
	for (int i{}; i < this->_lenght; i++) {
		std::cout << m_data[i] << std::endl;
	}
}

void IntegerArray::Substitution(int value, int index)
{
	if (index < 0 || index > _lenght) {
		throw bad_range();
	}
	m_data[index] = value;
}

void IntegerArray::insertBegin(int value)
{
	int* m_data_temp = new int[_lenght + 1];
	//присваиваем первому элементу массива введенное значение
	m_data_temp[0] = value;
	//копируем элементы массива
	std::copy_n(m_data, _lenght, m_data_temp + 1);
	//чистим старый массив
	delete[] m_data;
	//присваиваем массиву указатель на временный массив
	m_data = m_data_temp;
	//актуализируем длину
	++_lenght;
}

void IntegerArray::insertEnd(int value)
{
	int* m_data_temp = new int[_lenght + 1];
	//копируем элементы массива
	std::copy_n(m_data, _lenght, m_data_temp);
	//присваиваем введенное значение последнему элементу массива
	m_data_temp[_lenght] = value;
	//чистим старый массив
	delete[] m_data;
	//присваиваем массиву указатель на временный массив
	m_data = m_data_temp;
	//актуализируем длину
	++_lenght;
}

void IntegerArray::searchArr(int value)
{
	for (int i{}; i < _lenght; i++) {
		if (m_data[i] == value) {
			std::cout << "Искомое значение: " << value << "\nНаходится в массиве под индексом: " << i << std::endl;
			return;
		}
	}
	std::cout << "Искомое значение не найдено в массиве" << std::endl;
}
