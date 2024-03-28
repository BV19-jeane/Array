//Random
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t";

void main()
{
	setlocale(LC_ALL, "");
	const int n = 15;
	int arr[n];
	int minRand, maxRand;
	cout << "¬ведите минимально случайное число: "; cin >> minRand;
	cout << "¬ведите максимальное случайное число: "; cin >> maxRand;
		
	// заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//вывод массива на экран
	for (int i =0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//вывод отсортированного массива на экран
	cout << "—ортируем массив по возрастанию: ";
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}