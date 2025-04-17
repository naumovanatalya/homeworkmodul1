#include<iostream>
#include "coutPrint.h"
#include "calculate.h"

using namespace std;

void sum(int a, int b) {
	Printer(a, b, a+b, '+');
}

void min(int a, int b) {
	Printer(a, b, a - b, '-');
}

void umno(int a, int b) {
	Printer(a, b, a * b, '*');
}

void del(int a, int b) {
	if (b == 0) {
		cout << "На ноль делить нельзя" << endl;
	}
	else {
		Printer(a, b, (float)a / b, '/');
	}
}

int fact(int a) {
	if (a == 1) {
		return 1;
	}
	else if (a == 0) {
		return 0;
	}
	else {
		return a * fact(a - 1);
	}
}

int stepen(int a, int b) {
	if (b == 0) {
		return 1;
	}
	else {
		return a * stepen(a, b -= 1);
	}
}