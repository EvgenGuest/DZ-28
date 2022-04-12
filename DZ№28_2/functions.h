#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>


void fillArr(int arr[], int length, int min, int max);

template <typename T> void showArr(T arr[], int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

template <typename T> T* temresizeArr(T arr[], int length, int n) {
	if (n <= 0)
		return arr;

	if (n >= length) {
		T* tmp = new T[length];
		for (int i = 0; i < length; i++)
			tmp[i] = arr[i];
		delete[] arr;
		arr = new T[length + n];
		for (int i = 0; i < length; i++)
			arr[i] = tmp[i];
		delete[] tmp;
		return arr;
	}

	if (n < length) {
		length -= n;
		T* tmp = new T[length];
		for (int i = 0; i < length; i++)
			tmp[i] = arr[i];
		delete[] arr;
		return tmp;
	}
}
