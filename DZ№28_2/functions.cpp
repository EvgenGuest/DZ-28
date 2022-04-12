#include "functions.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void fillArr(int arr[], int length, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (max - min) + max;
}