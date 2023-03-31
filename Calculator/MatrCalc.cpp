#include "MatrCalc.h"
#include <iostream>
#include <locale.h>
using namespace std;
//�� ���������� ���������� ������������ ��������� ������� ������� �.�.
void input(int a[50][50], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
void output(int a[50][50], int& n, int& m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
}
void PlusMatr()
{
	int n, m, n1, m1;
	int a[50][50];
	int a1[50][50];
	do
	{
		cout << "���������� ����� ������ �������: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((n <= 0) || (n > 50));
	do
	{
		cout << "���������� �������� ������ �������: ";  cin >> m;
		if ((m <= 0) || (m > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((m <= 0) || (m > 50));
	do
	{
		cout << "���������� ����� ������ �������: ";  cin >> n1;
		if ((n1 <= 0) || (n1 > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((n1 <= 0) || (n1 > 50));
	do
	{
		cout << "���������� �������� ������ ������� ";  cin >> m1;
		if ((m1 <= 0) || (m1 > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((m1 <= 0) || (m1 > 50));
	if ((n != n1) || (m != m1))
	{
		cout << endl << "������� ������ ��������, �������� ����������, ������� � ������� ����" << endl;
	}
	else
	{
		cout << endl << "���� ��������� ������ �������: " << endl;
		input(a, n, m);
		cout << endl << "�������� �������: " << endl;
		output(a, n, m);
		cout << endl << "���� ��������� ������ �������: " << endl;
		input(a1, n1, m1);
		cout << endl << "�������� �������: " << endl;
		output(a1, n, m);
		cout << endl << "����� ���� �������� ������: " << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				a[i][j] = a[i][j] + a1[i][j];
			}
		}
		output(a, n, m);
	}
}
void MinMatr()
{
	int n, m, n1, m1;
	int a[50][50];
	int a1[50][50];
	do
	{
		cout << "���������� ����� ������ �������: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((n <= 0) || (n > 50));
	do
	{
		cout << "���������� �������� ������ �������: ";  cin >> m;
		if ((m <= 0) || (m > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((m <= 0) || (m > 50));
	do
	{
		cout << "���������� ����� ������ �������: ";  cin >> n1;
		if ((n1 <= 0) || (n1 > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((n1 <= 0) || (n1 > 50));
	do
	{
		cout << "���������� �������� ������ �������: ";  cin >> m1;
		if ((m1 <= 0) || (m1 > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((m1 <= 0) || (m1 > 50));
	if ((n != n1) || (m != m1))
	{
		cout << endl << "������� ������ ��������, ��������� ����������, ������� � ������� ����" << endl;
	}
	else
	{
		cout << endl << "���� ��������� ������ �������: " << endl;
		input(a, n, m);
		cout << endl << "�������� �������: " << endl;
		output(a, n, m);
		cout << endl << "���� ��������� ������ �������: " << endl;
		input(a1, n1, m1);
		cout << endl << "�������� �������: " << endl;
		output(a1, n, m);
		cout << endl << "�������� ���� �������� ������: " << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				a[i][j] = a[i][j] - a1[i][j];
			}
		}
		output(a, n, m);
	}
}
void MultMatr()
{
	int a[50][50], b[50][50], c[50][50];
	int n, n1, m, m1;
	do
	{
		cout << "���������� ����� ������ �������: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((n <= 0) || (n > 50));
	do
	{
		cout << "���������� �������� ������ �������: ";  cin >> m;
		if ((m <= 0) || (m > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((m <= 0) || (m > 50));
	do
	{
		cout << "���������� ����� ������ �������: ";  cin >> n1;
		if ((n1 <= 0) || (n1 > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((n1 <= 0) || (n1 > 50));
	do
	{
		cout << "���������� �������� ������ �������: ";  cin >> m1;
		if ((m1 <= 0) || (m1 > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((m1 <= 0) || (m1 > 50));
	if (m != n1)
	{
		cout << endl << "����� �������� ������ ������� �� ����� ����� ����� ������, ��������� ����������, ������� � ������� ����" << endl;
	}
	else
	{
		cout << endl << "���� ��������� ������ �������: " << endl;
		input(a, n, m);
		cout << endl << "�������� �������: " << endl;
		output(a, n, m);
		cout << endl << "���� ��������� ������ �������: " << endl;
		input(b, n1, m1);
		cout << endl << "�������� �������: " << endl;
		output(b, n1, m1);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m1; j++)
			{
				c[i][j] = 0;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m1; j++)
			{
				for (int k = 0; k < m; k++)
				{
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		cout << "���������:" << endl;
		output(c, n, m1);
	}
}
void TranspMatr()
{
	int n, m;
	int a[50][50];
	do
	{
		cout << "���������� ����� �������: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((n <= 0) || (n > 50));
	do
	{
		cout << "���������� �������� �������: ";  cin >> m;
		if ((m <= 0) || (m > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((m <= 0) || (m > 50));
	int b[50][50];
	input(a, n, m);
	cout << "�������� �������: " << endl;
	output(a, n, m);
	cout << "����������������� �������: " << endl;
	if (n == m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				b[i][j] = a[j][i];
			}
		}
		output(b, n, m);
	}
	else
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				b[i][j] = a[j][i];
			}
		}
		output(b, m, n);
	}
}
void MultIntMatr()
{
	int a[50][50], n, m, Int;
	do
	{
		cout << "���������� ����� �������: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((n <= 0) || (n > 50));
	do
	{
		cout << "���������� �������� �������: ";  cin >> m;
		if ((m <= 0) || (m > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((m <= 0) || (m > 50));
	input(a, n, m);
	cout << "�������� �������: " << endl;
	output(a, n, m);
	cout << "�����, �� ������� ����� �������� �������: ";  cin >> Int;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = a[i][j] * Int;
		}
	}
	cout << endl << "���������: " << endl;
	output(a, n, m);
}
void PlusIntMatr()
{
	int a[50][50], n, Int;
	do
	{
		cout << "���������� ����� � �������� �������: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((n <= 0) || (n > 50));
	input(a, n, n);
	cout << "�������� �������: " << endl;
	output(a, n, n);
	cout << "�����, ������� ����� ��������� � �������: ";  cin >> Int;
	for (int i = 0; i < n; i++)
	{
		a[i][i] = a[i][i] + Int;
	}
	cout << endl << "���������: " << endl;
	output(a, n, n);
}
void MinIntMatr()
{
	int a[50][50], n, Int;
	do
	{
		cout << "���������� ����� � �������� �������: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((n <= 0) || (n > 50));
	input(a, n, n);
	cout << "�������� �������: " << endl;
	output(a, n, n);
	cout << "�����, ������� ����� ������ �� �������: ";  cin >> Int;
	for (int i = 0; i < n; i++)
	{
		a[i][i] = a[i][i] - Int;
	}
	cout << endl << "���������: " << endl;
	output(a, n, n);

}
int DetRekursMatr(int a[50][50], int n)
{
	int b[50][50], opr = 0, i_temp, j_temp;
	if (n == 1) return (a[0][0]);
	if (n == 2) return ((a[0][0] * a[1][1]) - (a[0][1] * a[1][0]));
	else
	{
		for (int i = 0; i < n; i++)
		{
			i_temp = 0;
			for (int j = 1; j < n; j++)
			{
				j_temp = 0;
				for (int k = 0; k < n; k++)
				{
					if (k != i)
					{
						b[i_temp][j_temp] = a[j][k];
						j_temp++;
					}
				}
				i_temp++;
			}
			if((i + 2) % 2 == 0) opr += a[0][i] * DetRekursMatr(b, n - 1);
			if((i + 2) % 2 != 0) opr += -1 * a[0][i] * DetRekursMatr(b, n - 1);
		}
		return opr;
	}
}
void DetMatr()
{
	int n, a[50][50];
	do
	{
		cout << "���������� ����� � �������� ������� �������: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((n <= 0) || (n > 50));
	cout << "���� �������: " << endl;
	input(a, n, n);
	cout << "�������� �������: " << endl;
	output(a, n, n);
	cout << "������������ ������� �����: " << DetRekursMatr(a, n) << endl;
}
void Delet(int a[50][50], int b[50][50], int n, int stroka, int stolbec)
{
	int i_temp = 0;
	for (int i = 0; i < n; i++) 
	{
		if (i != stroka) 
		{
			int j_temp = 0;
			for (int j = 0; j < n; j++)
			{
				if (j != stolbec)
				{
					b[i_temp][j_temp] = a[i][j];
					j_temp++;
				}
			}
			i_temp++;
		}
	}
}
void ReversMatr()
{
	int a[50][50], a_rev[50][50], t[50][50], a_rev_tran[50][50];
	int n;
	do
	{
		cout << "���������� ����� � �������� ������� �������: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "���������� ����� � �������� ������� ������ ���� ������ 0 � ������ 50" << endl;
	} while ((n <= 0) || (n > 50));
	cout << "���� �������: " << endl;
	input(a, n, n);
	cout << "�������� �������: " << endl;
	output(a, n, n);
	if (DetRekursMatr(a, n) == 0) cout << "������������ ���� ������� ����� ����, �������� ������� �� ����������, ������� � ������� ����" << endl;
	else
	{
		if (n == 1)
		{
			cout << "�������, �������� ��������: " << endl;
			cout << "1/" << DetRekursMatr(a, n) << " * 1" << endl;
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					Delet(a, t, n, i, j);
					a_rev[i][j] = DetRekursMatr(t, n - 1);
				}
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if ((i + j + 2) % 2 != 0) a_rev_tran[i][j] = -1 * a_rev[j][i];
					else a_rev_tran[i][j] = a_rev[j][i];
				}
			}
			cout << "�������, �������� ��������: " << endl;
			cout << "1/" << DetRekursMatr(a, n) << endl <<  " * " << endl;
			output(a_rev_tran, n, n);
		}
	}
}
int MatrCalcMenu()
{
	setlocale(LC_ALL, "Russian");
	int ch;
	do
	{
		cout << "\t\t��������� �����������\t\t" << endl;
		cout << "1. �������� ������" << endl;
		cout << "2. ��������� ������" << endl;
		cout << "3. ��������� ������" << endl;
		cout << "4. ��������� ������� �� �����" << endl;
		cout << "5. �������� ������� � ������" << endl;
		cout << "6. ��������� ����� �� �������" << endl;
		cout << "7. ���������������� �������" << endl;
		cout << "8. ���������� �������, �������� ������" << endl;
		cout << "9. ������������ �������" << endl;
		cout << "0. ����� � ����" << endl;
		cin >> ch;
		while ((ch < 0) && (ch > 8))
		{
			cout << "������� ������ ����� ����, ��������� ����: " << endl;
		}
		switch (ch)
		{
		case 1:
		{
			system("cls");
			PlusMatr();
		}break;
		case 2: 
		{
			system("cls");
			MinMatr();
		}break;
		case 3:
		{
			system("cls");
			MultMatr();
		}break;
		case 4:
		{
			system("cls");
			MultIntMatr();
		}break;
		case 5: 
		{
			system("cls");
			PlusIntMatr();
		}break;
		case 6: 
		{
			system("cls");
			MinIntMatr();
		}break;
		case 7: 
		{
			system("cls");
			TranspMatr();
		}break;
		case 8: 
		{
			system("cls");
			ReversMatr(); 
		}break;
		case 9: 
		{
			system("cls");
			DetMatr();
		} break;
		default: 
		{
			system("cls");
			cout << "������� ������ ����� ����!" << endl;
		} break;
		case 0: return 0;
		}
	} while (ch != 0);
	return 0;
}