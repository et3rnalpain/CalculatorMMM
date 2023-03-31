#include "CombinatorCalc.h"
#include <iostream>
#include <math.h>
using namespace std;

void Factorial(int n, int m, int &factorialN, int &factorialNM, int &factorialM)
{
	for(int i = 1; i <= n; i++)
	{
		factorialN *= i;
	}
	for (int i = 1; i <= n - m; i++)
	{
		factorialNM *= i;
	}
	for (int i = 1; i <= m; i++)
	{
		factorialM *= i;
	}
}
void inputMN(int& m, int& n)
{
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
}
int AccommodationRepeat(int m, int n, int result) //размещение с повторением
{
	inputMN(m, n);
	result = pow(n, m);
	cout << "Ответ: ";
	return result;
}
int AccommodationNotRepeat(int m, int n, int result, int factorialNM, int factorialN, int factorialM) //размещение без повторений
{
	inputMN(m, n);
	Factorial(n, m, factorialN, factorialNM, factorialM);
	result = factorialN / factorialNM;
	cout << "Ответ: ";
	return result;
}
int CombinnationRepeat(int m, int n, int result, int factorialNM, int factorialN, int factorialM) //сочетание с повторений
{
	inputMN(m, n);
	n += m - 1;
	Factorial(n, m, factorialN, factorialNM, factorialM);
	result = factorialN / (factorialNM * factorialM);
	cout << "Ответ: ";
	return result;
}
int CombinnationNotRepeat(int m, int n, int result, int factorialNM, int factorialN, int factorialM) //сочетние без повторением
{
	inputMN(m, n);
	Factorial(n, m, factorialN, factorialNM, factorialM);
	result = factorialN / (factorialNM*factorialM);
	cout << "Ответ: ";
	return result;
}
int Permutation(int n, int m, int result, int factorialNM, int factorialN, int factorialM) //перестановка
{
	cout << "Введите общее количество объектов(n): ";
	cin >> n;
	Factorial(n, m, factorialN, factorialNM, factorialM);
	result = factorialN;
	cout << "Ответ: ";
	return result;
}
int MainCombinator()
{
	
	int choise, m = 0, n = 0, result = 0, factorialN = 1, factorialNM = 1, factorialM = 1;
	do
	{
		cout << "Выберите формулу:" << endl;
		cout << "1. Размещение с повторением" << endl;
		cout << "2. Размещение без повторением" << endl;
		cout << "3. Сочетание с повторением" << endl;
		cout << "4. Сочетание без повторением" << endl;
		cout << "5. Перестановка" << endl;
		cin >> choise;
		switch (choise)
		{
		case 0: return 0;
		case 1: cout << AccommodationRepeat(m, n, result);
			break;
		case 2: cout << AccommodationNotRepeat(m, n, result, factorialN, factorialNM, factorialM);
			break;
		case 3:
			cout << CombinnationRepeat(m, n, result, factorialN, factorialNM, factorialM);
			break;
		case 4: 
			cout << CombinnationNotRepeat(m, n, result, factorialN, factorialNM, factorialM); 
			break;
		case 5: 
			cout << Permutation(m, n, result, factorialN, factorialNM, factorialM);
			break;
		default: continue;
		}
		cout << endl;
	} while (choise != 0);
	return 0;
}
