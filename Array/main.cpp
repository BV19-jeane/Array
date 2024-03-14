#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int arr[10] = {};
	int temp = 0;
	int min, max;

	cout << "1. Введите массив элементов: " << endl;
	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	cout << "2. Выводим массив на экран в прямом порядке: " << endl;
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " " << endl;

	cout << "3. Выводим массив на экран в обратном порядке: " << endl;
	for (int i = 9; i >= 0; i--)
		cout << arr[i] << " " << endl;

	cout << "4. Сумма элементов массива: ";
	for (int i = 0; i < 10; i++)
	{
		//int temp = 0;
		temp += arr[i];
	}
	cout << temp << endl;

	cout << "5. Среднее арифметическое элементов массива: " << (temp / 10) << endl;

	cout << "6. Минимальный элемент: ";
	min = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	cout << min << endl;

	cout << "7. Максимальный элемент: ";
	max = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	cout << max << endl;
}