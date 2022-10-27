#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//Вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int t;
	t = arr[n - 1]; 
	cout << "Сдвиг массива ";
	cout << endl;
		for (int j = n - 2; j >= 0; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[0] = t;
		for (int j = 0; j < n; j++)
		{
			cout << arr[j] << "\t";
		}
		cout << endl;
	
	t = arr[n - 1];
	cout << "Сдвиг массива ";
	cout << endl;
	for (int j = n - 2; j >= 0; j--)
	{
		arr[j + 1] = arr[j];
	}
		arr[0] = t;

	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << "\t";
	}
	cout << endl;

	t = arr[n - 1];
	cout << "Сдвиг массива ";
	cout << endl;
	for (int j = n - 2; j >= 0; j--)
	{
		arr[j + 1] = arr[j];
	}
	arr[0] = t;

	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << "\t";
	}
	cout << endl;

	t = arr[n - 1];
	cout << "Сдвиг массива ";
	cout << endl;
	for (int j = n - 2; j >= 0; j--)
	{
		arr[j + 1] = arr[j];
	}
	arr[0] = t;

	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << "\t";
	}
	cout << endl;
	/*int s;
	t = arr[n - 1];
	cout << "Введите число "; cin >> s;
	for (int i = 0; i < s; i++)
	{
		for (int j = n - 2; j >= 0; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[0] = t;
		for (int j = 0; j < n; j++)
		{
			cout << arr[j] << "\t";
		}
		cout << endl;*/
	
}