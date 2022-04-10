#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T> void  showArr(T arr[], int length);
void fillArr(int arr[], int length, int min, int max);
template <typename T> T* temresizeArr(T arr[], int length, int n);