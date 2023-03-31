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
		cout << "������� ����� ����� ���� ��������������, ������������ �������(n, n > 1): ";
		cin >> n;
	}
	while (m <= 0 || m >= n)
	{
		cout << "������� ���������� ������������ �������, ������������������ ������� (m, m > 0 � < n): ";
		cin >> m;
	}
}
int AccommodationRepeat(int m, int n, int result) //���������� � �����������
{
	inputMN(m, n);
	result = pow(n, m);
	cout << "�����: ";
	return result;
}
int AccommodationNotRepeat(int m, int n, int result, int factorialNM, int factorialN, int factorialM) //���������� ��� ����������
{
	inputMN(m, n);
	Factorial(n, m, factorialN, factorialNM, factorialM);
	result = factorialN / factorialNM;
	cout << "�����: ";
	return result;
}
int CombinnationRepeat(int m, int n, int result, int factorialNM, int factorialN, int factorialM) //��������� � ����������
{
	inputMN(m, n);
	n += m - 1;
	Factorial(n, m, factorialN, factorialNM, factorialM);
	result = factorialN / (factorialNM * factorialM);
	cout << "�����: ";
	return result;
}
int CombinnationNotRepeat(int m, int n, int result, int factorialNM, int factorialN, int factorialM) //�������� ��� �����������
{
	inputMN(m, n);
	Factorial(n, m, factorialN, factorialNM, factorialM);
	result = factorialN / (factorialNM*factorialM);
	cout << "�����: ";
	return result;
}
int Permutation(int n, int m, int result, int factorialNM, int factorialN, int factorialM) //������������
{
	cout << "������� ����� ���������� ��������(n): ";
	cin >> n;
	Factorial(n, m, factorialN, factorialNM, factorialM);
	result = factorialN;
	cout << "�����: ";
	return result;
}
int MainCombinator()
{
	
	int choise, m = 0, n = 0, result = 0, factorialN = 1, factorialNM = 1, factorialM = 1;
	do
	{
		cout << "�������� �������:" << endl;
		cout << "1. ���������� � �����������" << endl;
		cout << "2. ���������� ��� �����������" << endl;
		cout << "3. ��������� � �����������" << endl;
		cout << "4. ��������� ��� �����������" << endl;
		cout << "5. ������������" << endl;
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
