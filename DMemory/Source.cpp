#include<iostream>
using namespace std;

void Print(int Arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	
	int n;
	cout << "������� ���������� ��������� �������: "; cin >> n;
	int* Arr = new int[n] {};
	//���������� �������
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
	cout << "��������� ��������� ������� �� �����: "<<"\t\t\t";
	Print(Arr, n);
	int even = 0; int odd = 0;
	for (int i = 0; i < n; i++) //���� ��� �������� ���������� ��������� �������� ������ � �������� ����� 
	{
		if (Arr[i]%2 == 0)
		{
			if (Arr[i] == 0) ;	//���������� ����
			else ++even;		//������� ���������� ��������� ������� ������ ����� 
		}
		else
		{
			++odd;				//������� ���������� ��������� ������� �������� �����
		}
	}
	//���������� �������� even � odd;
	int* ArrEven = new int[even] {};
	int* ArrOdd = new int[odd] {};
	int j = 0; int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] % 2 == 0)
		{
			if (Arr[i] == 0);			//���������� ����
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
	cout << "��������� ������� ������ ����� �� " <<even<<" ���������: "<<"\t\t";
	Print(ArrEven, even);
	cout << "��������� ������� �������� ����� �� " <<odd<<" ���������: " << "\t";
	Print(ArrOdd, odd);
	delete[] Arr;
	delete[] ArrEven;
	delete[] ArrOdd;
}


void Print(int Arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}