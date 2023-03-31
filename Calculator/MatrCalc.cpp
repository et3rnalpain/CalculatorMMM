#include "MatrCalc.h"
#include <iostream>
#include <locale.h>
using namespace std;
//За реализацию Матричного калькулятора полностью отвечал Симонин С.А.
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
		cout << "Количество строк первой матрицы: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((n <= 0) || (n > 50));
	do
	{
		cout << "Количество столбцов первой матрицы: ";  cin >> m;
		if ((m <= 0) || (m > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((m <= 0) || (m > 50));
	do
	{
		cout << "Количество строк второй матрицы: ";  cin >> n1;
		if ((n1 <= 0) || (n1 > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((n1 <= 0) || (n1 > 50));
	do
	{
		cout << "Количество столбцов второй матрицы ";  cin >> m1;
		if ((m1 <= 0) || (m1 > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((m1 <= 0) || (m1 > 50));
	if ((n != n1) || (m != m1))
	{
		cout << endl << "Размеры матриц различны, сложение невозможно, возврат в главное меню" << endl;
	}
	else
	{
		cout << endl << "Ввод элементов первой матрицы: " << endl;
		input(a, n, m);
		cout << endl << "Введённая матрица: " << endl;
		output(a, n, m);
		cout << endl << "Ввод элементов второй матрицы: " << endl;
		input(a1, n1, m1);
		cout << endl << "Введённая матрица: " << endl;
		output(a1, n, m);
		cout << endl << "Сумма двух введённых матриц: " << endl;
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
		cout << "Количество строк первой матрицы: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((n <= 0) || (n > 50));
	do
	{
		cout << "Количество столбцов первой матрицы: ";  cin >> m;
		if ((m <= 0) || (m > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((m <= 0) || (m > 50));
	do
	{
		cout << "Количество строк второй матрицы: ";  cin >> n1;
		if ((n1 <= 0) || (n1 > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((n1 <= 0) || (n1 > 50));
	do
	{
		cout << "Количество столбцов второй матрицы: ";  cin >> m1;
		if ((m1 <= 0) || (m1 > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((m1 <= 0) || (m1 > 50));
	if ((n != n1) || (m != m1))
	{
		cout << endl << "Размеры матриц различны, вычитание невозможно, возврат в главное меню" << endl;
	}
	else
	{
		cout << endl << "Ввод элементов первой матрицы: " << endl;
		input(a, n, m);
		cout << endl << "Введённая матрица: " << endl;
		output(a, n, m);
		cout << endl << "Ввод элементов второй матрицы: " << endl;
		input(a1, n1, m1);
		cout << endl << "Введённая матрица: " << endl;
		output(a1, n, m);
		cout << endl << "Разность двух введённых матриц: " << endl;
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
		cout << "Количество строк первой матрицы: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((n <= 0) || (n > 50));
	do
	{
		cout << "Количество столбцов первой матрицы: ";  cin >> m;
		if ((m <= 0) || (m > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((m <= 0) || (m > 50));
	do
	{
		cout << "Количество строк второй матрицы: ";  cin >> n1;
		if ((n1 <= 0) || (n1 > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((n1 <= 0) || (n1 > 50));
	do
	{
		cout << "Количество столбцов второй матрицы: ";  cin >> m1;
		if ((m1 <= 0) || (m1 > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((m1 <= 0) || (m1 > 50));
	if (m != n1)
	{
		cout << endl << "Число столбцов первой матрицы не равно числу строк второй, умножение невозможно, возврат в главное меню" << endl;
	}
	else
	{
		cout << endl << "Ввод элементов первой матрицы: " << endl;
		input(a, n, m);
		cout << endl << "Введённая матрица: " << endl;
		output(a, n, m);
		cout << endl << "Ввод элементов второй матрицы: " << endl;
		input(b, n1, m1);
		cout << endl << "Введённая матрица: " << endl;
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
		cout << "Результат:" << endl;
		output(c, n, m1);
	}
}
void TranspMatr()
{
	int n, m;
	int a[50][50];
	do
	{
		cout << "Количество строк матрицы: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((n <= 0) || (n > 50));
	do
	{
		cout << "Количество столбцов матрицы: ";  cin >> m;
		if ((m <= 0) || (m > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((m <= 0) || (m > 50));
	int b[50][50];
	input(a, n, m);
	cout << "Введённая матрица: " << endl;
	output(a, n, m);
	cout << "Транспонированная матрица: " << endl;
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
		cout << "Количество строк матрицы: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((n <= 0) || (n > 50));
	do
	{
		cout << "Количество столбцов матрицы: ";  cin >> m;
		if ((m <= 0) || (m > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((m <= 0) || (m > 50));
	input(a, n, m);
	cout << "Введённая матрица: " << endl;
	output(a, n, m);
	cout << "Число, на которое нужно умножить матрицу: ";  cin >> Int;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = a[i][j] * Int;
		}
	}
	cout << endl << "Результат: " << endl;
	output(a, n, m);
}
void PlusIntMatr()
{
	int a[50][50], n, Int;
	do
	{
		cout << "Количество строк и столбцов матрицы: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((n <= 0) || (n > 50));
	input(a, n, n);
	cout << "Введённая матрица: " << endl;
	output(a, n, n);
	cout << "Число, которое нужно прибавить к матрице: ";  cin >> Int;
	for (int i = 0; i < n; i++)
	{
		a[i][i] = a[i][i] + Int;
	}
	cout << endl << "Результат: " << endl;
	output(a, n, n);
}
void MinIntMatr()
{
	int a[50][50], n, Int;
	do
	{
		cout << "Количество строк и столбцов матрицы: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "Количество строк и столбцов матрицы должно быть больше 0 и меньше 50" << endl;
	} while ((n <= 0) || (n > 50));
	input(a, n, n);
	cout << "Введённая матрица: " << endl;
	output(a, n, n);
	cout << "Число, которое нужно отнять от матрицы: ";  cin >> Int;
	for (int i = 0; i < n; i++)
	{
		a[i][i] = a[i][i] - Int;
	}
	cout << endl << "Результат: " << endl;
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
		cout << "Количество строк и столбцов матрицы матрицы: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((n <= 0) || (n > 50));
	cout << "Ввод матрицы: " << endl;
	input(a, n, n);
	cout << "Введённая матрица: " << endl;
	output(a, n, n);
	cout << "Определитель матрицы равен: " << DetRekursMatr(a, n) << endl;
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
		cout << "Количество строк и столбцов матрицы матрицы: ";  cin >> n;
		if ((n <= 0) || (n > 50)) cout << "Количество строк и столбцов массива должно быть больше 0 и меньше 50" << endl;
	} while ((n <= 0) || (n > 50));
	cout << "Ввод матрицы: " << endl;
	input(a, n, n);
	cout << "Введённая матрица: " << endl;
	output(a, n, n);
	if (DetRekursMatr(a, n) == 0) cout << "Определитель этой матрицы равен нулю, обратная матрица не существует, возврат в главное меню" << endl;
	else
	{
		if (n == 1)
		{
			cout << "Матрица, обратная введённой: " << endl;
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
			cout << "Матрица, обратная введённой: " << endl;
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
		cout << "\t\tМАТРИЧНЫЙ КАЛЬКУЛЯТОР\t\t" << endl;
		cout << "1. Сложение матриц" << endl;
		cout << "2. Вычитание матриц" << endl;
		cout << "3. Умножение матриц" << endl;
		cout << "4. Умножение матрицы на число" << endl;
		cout << "5. Сложение матрицы с числом" << endl;
		cout << "6. Вычитание числа из матрицы" << endl;
		cout << "7. Транспонирование матрицы" << endl;
		cout << "8. Вычисление матрицы, обратной данной" << endl;
		cout << "9. Определитель матрицы" << endl;
		cout << "0. Выход в меню" << endl;
		cin >> ch;
		while ((ch < 0) && (ch > 8))
		{
			cout << "Неверно выбран пункт меню, повторите ввод: " << endl;
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
			cout << "Неверно выбран пункт меню!" << endl;
		} break;
		case 0: return 0;
		}
	} while (ch != 0);
	return 0;
}