#include "TheoryProbablityMathStatistics.h"
#include <iostream>
using namespace std;

double Probablity(double result) // вероятность
{
	int m = 0, n = 0;
	while (n <= 1)
	{
		cout << "Введите общее число всех равновозможных, элементарных исходов(n, n > 1): ";
		cin >> n;
	}
	while (m <= 0 || m >= n)
	{
		cout << "Введите количество элементарных исходов, благоприятствующих событию (m, m > 0 и < n): ";
		cin >> m;
	}
	result = double(m)/ double(n);
	cout << "Ответ: ";
	return result;
}
void input(double array[50], int& count)
{
	while (count*2 <= 1 || count*2 >= 50)
	{
		cout << "Введите количество случайной величины Х (Х < 50): ";
		cin >> count;
	}
	for (int i = 0; i <= count*2 - 1; i++)
	{
		if (i < count)
		{
			cout << "Введите случайную величину Х" << i + 1 << ": ";
			cin >> array[i];
		}
		else
		{
			do
			{
				cout << "Введите вероятность для случайной величины Х" << i + 1 << "(вероятность меньше либо равно 1 и больше 0): ";
				cin >> array[i];
			} while (array[i] <= 0 || array[i] > 1);
		}
	}
}
double MathWaiting(double array[50], double& mathwait, int count) //мат ожидание
{
	for (int i = 0; i < count; i++)
	{
		mathwait += array[i] * array[i+count];
	}
	return mathwait;
}
double MathWaitingPOW2(double array[50], double &mathwait2, int count) //мат ожидание в квадрате
{
	for (int i = 0; i < count; i++)
	{ 
		mathwait2 += array[i+count] * array[i] * array[i];
	}
	return 0;
}

double Dispersion(double array[50], double mathwait, int count, double result, double mathwait2) //дисперсия
{
	MathWaiting(array, mathwait, count);
	MathWaitingPOW2(array, mathwait2, count);
	cout << "Ответ: ";
	result = mathwait2 - mathwait * mathwait;
	return result;
}
int MainTPMS()
{
	int choise, count = 0;
	double array[50], mathwait = 0, mathwait2 = 0, result = 0;
	do
	{
		cout << "Выберите формулу:" << endl;
		cout << "1. Вероятность m/n" << endl;
		cout << "2. Дисперсия для дискретного распределения величин" << endl;
		cout << "3. Математическое ожидание для дискретного распределения величин" << endl;
		cin >> choise;
		switch (choise)
		{
		case 0: exit(0);
		case 1: 
			cout << Probablity(result);
			cout << endl;
			break;
		case 3: 
			input(array, count);
			cout << "Ответ: ";
			cout << MathWaiting(array, mathwait, count);
			cout << endl;
			mathwait = 0;
			break;
		case 2:
			input(array, count);
			cout << Dispersion(array, mathwait, count, result, mathwait2);
			cout << endl;
			mathwait = 0;
			mathwait2 = 0;
			count = 0;
			break;
		default: continue;
		}
	} while (choise != 0);
}