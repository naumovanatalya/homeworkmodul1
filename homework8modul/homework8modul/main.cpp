#include<iostream>
#include<exception>
#include<string>
#include "Array.h"
#include "bad_length.h"
#include "bad_range.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	//объявляем массив
	Array<int> a(4);
	Array<string> str(5);
	//добавляем значения для массива a
	a.Substitution(1, 0);
	a.Substitution(22, 1);
	a.Substitution(56, 2);
	a.Substitution(88, 3);
	a.insertBegin(109);
	a.insertEnd(289);
	//добавляем значения для массива str
	str.Substitution("Hello", 0);
	str.Substitution("World", 1);
	str.Substitution("How", 2);
	str.Substitution("are", 3);
	str.Substitution("You", 4);

	a.countArray();
	cout << "-------------------------------" << endl;
	str.countArray();

	a.searchArr(22);
	a.searchArr(355);
	a.searchArr(109);

	try {
		Array<int> b(-1);
	}

	catch (bad_length& e) {
		cout << "Bad_lenght caught!" << endl;
		cout << e.what() << endl;
	}
	try {
		a[-1];
	}
	catch (bad_range& e) {
		cout << "Bad_range caught!" << endl;
		cout << e.what() << endl;
	}

   return 0;
}