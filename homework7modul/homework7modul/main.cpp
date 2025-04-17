#include<iostream>
#include<exception>
#include "IntegerArray.h"
#include "bad_length.h"
#include "bad_range.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	//объявляем массив
	IntegerArray a(4);
	a.Substitution(1, 0);
	a.Substitution(22, 1);
	a.Substitution(56, 2);
	a.Substitution(88, 3);
	a.insertBegin(109);
	a.insertEnd(289);

	a.countArray();

	a.searchArr(22);
	a.searchArr(355);
	a.searchArr(109);

	try {
		IntegerArray b(-1);
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