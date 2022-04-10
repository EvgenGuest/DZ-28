#include <iostream>
#include "functions.h"
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	
	
	//Задача 2.

		cout << "Задача 2.\n";
		int* z2 = new int[10];
		fillArr(z2, 10, 10, 31);
		cout << "Изначальный массив:\n";
		showArr(z2, 10);
		int* z2_2 = new int[10];
		z2_2 = temresizeArr(z2, 10, 6);
		showArr(z2_2, 10);




	return 0;
}
