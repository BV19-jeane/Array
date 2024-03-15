#include <iostream>
using namespace std;
#define tab "\t"

void main()
 {
	setlocale(LC_ALL, "");
	const int n = 10;
	int temp;
	int arr[n] = {0, 1 , 1, 2, 3, 5, 8, 13, 21, 34};

// Выводим массив на экран
	cout << "Заданный массив: " << endl;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
		cout << endl;
//Смещаем элементы массива влево
		cout << "Смещаем элементы массова влево: ";
		for (int i = 0; i < n; i++)
		{
			temp = arr[0];

			for (int j = 0; j < n - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[n - 1] = temp;
			//вывод массива
			for (int j = 0; j < n; j++)
			{
				cout << arr[j] << tab;
			}
			cout << endl;
		}

		//cout << temp;
		cout << endl;

		
}