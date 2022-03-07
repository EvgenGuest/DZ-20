#include<iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

template <typename T> void showArray(T array[], int length);
template <typename T> int searchIndex(T array[], int length, T key, int begin = 0){
	for (int i = begin; i < length; i++)
		if (array[i] == key)
			return i;
	return -1;
}
template <typename T> int searchLastIndex(T array[], int length, T key, int begin = 0) {
	for (int i = length; i >= 0; i--)
		if (array[i] == key)
			return i;
	return -1;
}
template <typename T> int maxElement(T array[], int length) {
	int max = 0;
	for (int i = 0; i < length; i++)
		if (array[i] > max)
			max = array[i];
	return max;
}
template <typename T> int minElement(T array[], int length) {
	int min = 0;
	for (int i = 0; i < length; i++)
		if (array[i] < min)
			min = array[i];
	return min;
}
template <typename T> int meanValue(T array[], int length) {
	int value = 0;
	for (int i = 0; i < length; i++)
		value += array[i];
	value = value / length;
	return value;
}
template <typename T> void range(T array[], int length, T n, T m) {
	for (int i = 0; i < length; i++)
		if(array[i] > n && array[i] < m)
			cout << array[i]<<" ";
}
template <typename T> int counter(T array[], int length, T key) {
	int count = 0;
	for (int i = 0; i < length; i++)
		if (array[i] == key)
			count++;
	return count;
}


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;
	//�������
	cout << "����������� ������:\n";
	int arr[100];
	for (int i = 0; i < 100; i++)
		arr[i] = rand() % (100 + 1 - (-100)) + (-100);
	showArray(arr, 100);
	cout << "\n\n";
	cout << "������ ������� ��������� �������� � ������: " << searchIndex(arr, 100, 20) << endl;
	cout << "������ ���������� ��������� �������� � ������: " << searchLastIndex(arr, 100, 20) << endl;
	cout << "������������ ������� �������: " << maxElement(arr, 100) << endl;
	cout << "����������� ������� �������: " << minElement(arr, 100) << endl;
	cout << "������� �������������� ��������� �������: " << meanValue(arr, 100) << endl;
	cout << "�������� ������ � ����� ���������: ";
	cin >> n >> m;
	cout << "�������� ������� � ������� ���������: \n";
	range(arr, 100, n, m);
	cout << endl;
	cout << "����������� ��������� �������� � ������: " << counter(arr, 100, -19) << endl;

	return 0;
}

template <typename T> void showArray(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]";
}

