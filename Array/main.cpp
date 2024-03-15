#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");

    const int N = 10;
	int arr[N] = {};
	int sum = 0;
	int min, max;

	cout << "1. Введите массив из 10 элементов: " << endl;
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	cout << "2. Выводим массив на экран в прямом порядке: " << endl;
	for (int i = 0; i < N; i++)
		cout << arr[i] << " " << endl;

	cout << "3. Выводим массив на экран в обратном порядке: " << endl;
	for (int i = N - 1; i >= 0; i--)
		cout << arr[i] << " " << endl;

	cout << "4. Сумма элементов массива: ";
	for (int i = 0; i < N; i++)
	{
		//int temp = 0;
		sum += arr[i];
	}
	cout << sum << endl;

	cout << "5. Среднее арифметическое элементов массива: " << ((double)sum / N) << endl;

	cout << "6. Минимальный элемент: ";
	min = arr[0];
	for (int i = 0; i < N; i++)
	{ // min = max = arr[0]
		if (min > arr[i]) // if (arr[i] < min)min = arr[i]
			min = arr[i]; // if (arr[i] > max)max = arr[i]
	}
	cout << min << endl;

	cout << "7. Максимальный элемент: ";
	max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	cout << max << endl;

}