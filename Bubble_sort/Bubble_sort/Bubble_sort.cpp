// Bubble_sort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

int counts = 0;

using namespace std;



template<typename T>
void swap_(T* priv, T* next) {
	T temp;
	temp = *priv;
	*priv = *next;
	*next = temp;
}


template<typename T>
void bubble_sort(T arr[], int arrLength) {
	for (int i = arrLength - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap_(&arr[j], &arr[j + 1]);
			}
			counts++;
		}
	}
}

template<typename T>
void bubble_sort_bool(T arr[], int arrLength) {
	for (bool sorted = false;sorted = !sorted ; arrLength --) {
		for (int j = 0; j < arrLength; j++) {
			if (arr[j-1] > arr[j]) {
				swap_(&arr[j-1], &arr[j ]);
				sorted = false;
			}
			counts++;
		}
	}
}

template<typename T>
void traversal(T arr[], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << endl;
	cout << endl;
}



int main() {
	int arr[] = { 61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62 };
	int len = sizeof(arr)/sizeof(int);
	bubble_sort_bool(arr, len);
	traversal(arr, len);
	cout << "counts: " << counts <<endl;

	system("pause");
}