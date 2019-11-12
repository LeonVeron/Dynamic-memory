#include<iostream>
using namespace std;

void Print(int Arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	
	int n;
	cout << "Введите количество элементов массива: "; cin >> n;
	int* Arr = new int[n] {};
	//Заполнение массива
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
	cout << "Выведение исходного массива на экран: "<<"\t\t\t";
	Print(Arr, n);
	int even = 0; int odd = 0;
	for (int i = 0; i < n; i++) //цикл для подсчета количества элементов массивов четных и нечетных чисел 
	{
		if (Arr[i]%2 == 0)
		{
			if (Arr[i] == 0) ;	//исключение ноля
			else ++even;		//счетчик количества элементов массива четных чисел 
		}
		else
		{
			++odd;				//счетчик количества элементов массива нечетных чисел
		}
	}
	//Заполнение массивов even и odd;
	int* ArrEven = new int[even] {};
	int* ArrOdd = new int[odd] {};
	int j = 0; int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] % 2 == 0)
		{
			if (Arr[i] == 0);			//исключение ноля
			else
			{
				for (; j < even;)
				{
					ArrEven[j] = Arr[i];
					j++;
					break;
				}
			}
		}
		else
		{
			for (; k < odd;)
			{
				ArrOdd[k] = Arr[i];
				k++;
				break;
			}
		}
	}
	cout << "Выведение массива четных чисел из " <<even<<" элементов: "<<"\t\t";
	Print(ArrEven, even);
	cout << "Выведение массива нечетных чисел из " <<odd<<" элементов: " << "\t";
	Print(ArrOdd, odd);
	delete[] Arr;
	delete[] ArrEven;
	delete[] ArrOdd;
}


void Print(int Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}