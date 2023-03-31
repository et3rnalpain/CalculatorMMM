#include <iostream>
#include <math.h>
#include <locale>
#include <iomanip>
#include <malloc.h>
#include "PolynomialCalc.h"
using namespace std;

//Меню
void PolynomialCalcMenu()
{
	int ch;

	do {
		cout << setw(15) << "\n\tКАЛЬКУЛЯТОР МНОГОЧЛЕНОВ\t" << endl;
		cout << setw(15) << endl << "Выберите действие для калькулятора:\n";
		cout << endl << "1. Сложение многочленов.";
		cout << endl << "2. Вычитание многочленов.";
		cout << endl << "3. Умножение многочлена на число.";
		cout << endl << "4. Умножение многочлена на многочлен.";
		cout << endl << "5. Вычисление производной от многочлена.";
		cout << endl << "6. Деление многочлена на многочлен.";
		cout << endl << "\nНажмите 0, чтобы выйти из модуля калькулятора многочленов." << endl;

		cin >> ch;

		while (ch < 0 || ch > 6)
		{
			cout << endl << "Ошибка ввода. \nВведите число (1 - 6), чтобы выбрать режим. \nНажмите 0, чтобы выйти из модуля калькулятора многочленов." << endl;
		}

		switch (ch)
		{
		case 0:
			return;

		case 1: //СЛОЖЕНИЕ
		{
			int a_degree, b_degree;

			cout << "Введите степень первого многочлена:"; cin >> a_degree;

			while (a_degree > 10 || a_degree < 1)
			{
				cout << "Ошибка. Степень многочлена не может быть меньше 1 или больше 10" << endl;
				cout << "Введите степень многочлена:"; cin >> a_degree;
			}
			double* a = PolynomialDataInput(a_degree);

			cout << "Введите степень второго многочлена:"; cin >> b_degree;

			while (b_degree > 10 || b_degree < 1)
			{
				cout << "Ошибка. Степень многочлена не может быть меньше 1 или больше 10" << endl;
				cout << "Введите степень многочлена:"; cin >> b_degree;
			}

			double* b = PolynomialDataInput(b_degree); 
			cout << endl;

			double* c = PolynomialAddition(a, b, a_degree, b_degree);
			free(c);
			free(b);
			free(a);
		}break;

		case 2: //ВЫЧИТАНИЕ
		{
			int a_degree, b_degree;

			cout << "Введите степень первого многочлена:"; cin >> a_degree;

			while (a_degree > 10 || a_degree < 1)
			{
				cout << "Ошибка. Степень многочлена не может быть меньше 1 или больше 10" << endl;
				cout << "Введите степень многочлена:"; cin >> a_degree;
			}
			double* a = PolynomialDataInput(a_degree);

			cout << "Введите степень второго многочлена:"; cin >> b_degree;

			while (b_degree > 10 || b_degree < 1)
			{
				cout << "Ошибка. Степень многочлена не может быть меньше 1 или больше 10" << endl;
				cout << "Введите степень многочлена:"; cin >> b_degree;
			}

			double* b = PolynomialDataInput(b_degree);
			cout << endl;

			double* c = PolynomialSubstraction(a, b, a_degree, b_degree);
			free(c);
			free(b);
			free(a);
		}break;

		case 3: //УМНОЖЕНИЕ НА ЧИСЛО
		{
			int a_degree;
			double multiply_number;

			cout << "Введите степень многочлена:"; cin >> a_degree;

			while (a_degree > 10 || a_degree < 1)
			{
				cout << "Ошибка. Степень многочлена не может быть меньше 1 или больше 10" << endl;
				cout << "Введите степень многочлена:"; cin >> a_degree;
			}
			double* a = PolynomialDataInput(a_degree);

			cout << "Введите число, на которое необходимо умножить многочлен:"; cin >> multiply_number;
			while (multiply_number > 999 || multiply_number < (-999))
			{
				cout << "Ошибка. Введите число в диапазоне [-999;999]" << endl;
				cout << "Введите число, на которое необходимо умножить многочлен:"; cin >> multiply_number;
			}

			PolynomialMultiplication_byNumber(a, a_degree, multiply_number); 
			free(a);
		}break;

		case 4: //УМНОЖЕНИЕ НА МНОГОЧЛЕН
		{
			int a_degree, b_degree;

			cout << "Введите степень первого многочлена:"; cin >> a_degree;

			while (a_degree > 10 || a_degree < 1)
			{
				cout << "Ошибка. Степень многочлена не может быть меньше 1 или больше 10" << endl;
				cout << "Введите степень многочлена:"; cin >> a_degree;
			}
			double* a = PolynomialDataInput(a_degree);

			cout << "Введите степень второго многочлена:"; cin >> b_degree;

			while (b_degree > 10 || b_degree < 1)
			{
				cout << "Ошибка. Степень многочлена не может быть меньше 1 или больше 10" << endl;
				cout << "Введите степень многочлена:"; cin >> b_degree;
			}

			double* b = PolynomialDataInput(b_degree);
			cout << endl;

			double* c = PolynomialMultiplication_byPoly(a, b, a_degree, b_degree);
			free(c);
			free(b);
			free(a);
		}break;
		
		case 5: //ПРОИЗВОДНАЯ
		{
			int a_degree;

			cout << "Введите степень многочлена:"; cin >> a_degree;

			while (a_degree > 10 || a_degree < 1)
			{
				cout << "Ошибка. Степень многочлена не может быть меньше 1 или больше 10" << endl;
				cout << "Введите степень многочлена:"; cin >> a_degree;
			}
			double* a = PolynomialDataInput(a_degree);
			PolynomialDerivation(a, a_degree); 
			free(a);
		}break;

		case 6: //ДЕЛЕНИЕ НА МНОГОЧЛЕН
		{
			int a_degree, b_degree;

			cout << "Введите степень первого многочлена:"; cin >> a_degree;

			while (a_degree > 10 || a_degree < 1)
			{
				cout << "Ошибка. Степень многочлена не может быть меньше 1 или больше 10" << endl;
				cout << "Введите степень многочлена:"; cin >> a_degree;
			}
			int* a = PolynomialIntDataInput(a_degree);

			cout << "Введите степень второго многочлена:"; cin >> b_degree;

			while (b_degree > 10 || b_degree < 1 || b_degree > a_degree)
			{
				cout << "Ошибка. Степень многочлена не может быть меньше 1 или больше 10. Многочлен-делитель не может быть меньше делителя." << endl;
				cout << "Введите степень многочлена:"; cin >> b_degree;
			}

			int* b = PolynomialIntDataInput(b_degree);
			cout << endl;

			int* c = PolynomialDivision(a, b, a_degree, b_degree);
		}
		default:
			cout << endl << "Ошибка ввода. \nВведите число (1 - 6), чтобы выбрать режим. \nНажмите 0, чтобы выйти из модуля калькулятора многочленов." << endl;
		}

	} while (ch != 0);
	exit(0);
}

//Ввод данных
double* PolynomialDataInput(int poly_degree)
{
	double* poly_coef;

	poly_coef = (double*)malloc((poly_degree + 2) * sizeof(double));

	cout << "Введите " << poly_degree + 1 << " коэффициентов:" << endl;
	for (int i = 0; i <= poly_degree; i++)
	{
		cin >> poly_coef[i];
	}

	return poly_coef;
	free(poly_coef);
}

int* PolynomialIntDataInput(int poly_degree)
{
	int* poly_coef;

	poly_coef = (int*)malloc((poly_degree + 2) * sizeof(int));

	cout << "Введите " << poly_degree + 1 << " коэффициентов:" << endl;
	for (int i = 0; i <= poly_degree; i++)
	{
		cin >> poly_coef[i];
	}

	return poly_coef;
	free(poly_coef);
}

//Сложение многочленов
double* PolynomialAddition(double* a, double* b, int a_degree, int b_degree)
{
	//Вывод первого массива коэффициентов в виде многочлена
	for (int i = a_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (a[a_degree] < 0)
				cout << "(" << a[a_degree] << ")" << endl;
			else if (a[a_degree] != 0)
				cout << a[a_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (a[a_degree-i] < 0)
				cout << "(" << a[a_degree - i] << "x)" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x^" << i << ")" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x^" << i << " + ";
		}
	}

	cout << "+" << endl;

	//Вывод второго массива коэффициентов в виде многочлена
	for (int i = b_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (b[b_degree] < 0)
				cout << "(" << b[b_degree] << ")" << endl;
			else if (b[b_degree] != 0)
				cout << b[b_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (b[b_degree - i] < 0)
				cout << "(" << b[b_degree - i] << "x)" << " + ";
			else if (b[b_degree - i] != 0)
				cout << b[b_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (b[b_degree - i] < 0)
				cout << "(" << b[b_degree - i] << "x^" << i << ")" << " + ";
			else if (b[b_degree - i] != 0)
				cout << b[b_degree - i] << "x^" << i << " + ";
		}
	} 

	cout << "=" << endl;


	//Подсчёт результата, выделение памяти для массива, содержащего коэффициенты итогового многочлена.
	//Память для массива выделяется в соответствии с размером наибольшего из двух массива коэффициентов.

	double* result_poly;
	int result_poly_degree;


	if (a_degree >= b_degree)
	{
		result_poly_degree = a_degree;
		result_poly = (double*)malloc((a_degree+2) * sizeof(double));
		for (int i = 0; i <= (a_degree - b_degree); i++)
		{
			result_poly[i] = a[i];
		}
		for (int i = 0; i <= a_degree; i++)
		{
			result_poly[i + (a_degree - b_degree)] = a[i + (a_degree - b_degree)] + b[i];
		}
	}
	else
	{
		result_poly_degree = b_degree;
		result_poly = (double*)malloc((b_degree + 2) * sizeof(double));
		for (int i = 0; i <= (b_degree - a_degree); i++)
		{
			result_poly[i] = b[i];
		}
		for (int i = 0; i <= b_degree; i++)
		{
			result_poly[i + (b_degree - a_degree)] = a[i] + b[i + (b_degree - a_degree)];
		}
	}


	//Вывод итогового массива коэффициентов в виде многочлена.
	for (int i = result_poly_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (result_poly[result_poly_degree] < 0)
				cout << "(" << result_poly[result_poly_degree] << ")" << endl;
			else if (result_poly[result_poly_degree] != 0)
				cout << result_poly[result_poly_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (result_poly[result_poly_degree - i] < 0)
				cout << "(" << result_poly[result_poly_degree - i] << "x)" << " + ";
			else if (result_poly[result_poly_degree - i] != 0)
				cout << result_poly[result_poly_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (result_poly[result_poly_degree - i] < 0)
				cout << "(" << result_poly[result_poly_degree - i] << "x^" << i << ")" << " + ";
			else if (result_poly[result_poly_degree - i] != 0)
				cout << result_poly[result_poly_degree - i] << "x^" << i << " + ";
		}
	}

	cout << endl;


	return result_poly;
	free(result_poly);
}//done

//Умножение многочлена на число
double* PolynomialMultiplication_byNumber(double* a, int a_degree, double muliply_number)
{
	//Вывод первого массива коэффициентов в виде многочлена
	for (int i = a_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (a[a_degree] < 0)
				cout << "(" << a[a_degree] << ")" << endl;
			else if (a[a_degree] != 0)
				cout << a[a_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x)" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x^" << i << ")" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x^" << i << " + ";
		}
	}

	cout << "*" << endl << muliply_number << endl << "=" << endl;


	//Подсчёт результата, выделение памяти для массива, содержащего коэффициенты итогового многочлена.
	//Память для массива выделяется в соответствии с размером введённого умножаемого массива.

	double* result_poly;
	int result_poly_degree;

	result_poly_degree = a_degree;
	result_poly = (double*)malloc((a_degree + 2) * sizeof(double));
	for (int i = 0; i <= result_poly_degree; i++)
	{
		result_poly[i] = a[i] * muliply_number;
	}
	
	//Вывод итогового массива коэффициентов в виде многочлена.

	if (muliply_number == 0)
	{
		cout << "0" << endl;
	}
	else
	{
		for (int i = result_poly_degree; i >= 0; i--)
		{
			if (i == 0)
			{
				if (result_poly[result_poly_degree] < 0)
					cout << "(" << result_poly[result_poly_degree] << ")" << endl;
				else if (result_poly[result_poly_degree] != 0)
					cout << result_poly[result_poly_degree] << endl;
				else
					cout << "0" << endl;
			}
			else if ((i - 1) == 0)
			{
				if (result_poly[result_poly_degree - i] < 0)
					cout << "(" << result_poly[result_poly_degree - i] << "x)" << " + ";
				else if (result_poly[result_poly_degree - i] != 0)
					cout << result_poly[result_poly_degree - i] << "x" << " + ";
			}
			else if (i > 0)
			{
				if (result_poly[result_poly_degree - i] < 0)
					cout << "(" << result_poly[result_poly_degree - i] << "x^" << i << ")" << " + ";
				else if (result_poly[result_poly_degree - i] != 0)
					cout << result_poly[result_poly_degree - i] << "x^" << i << " + ";
			}
		}
	}

	cout << endl;


	return result_poly;
	free(result_poly);
}//done

//Умножение многочлена на многочлен
double* PolynomialMultiplication_byPoly(double* a, double* b, int a_degree, int b_degree)
{
	//Вывод первого массива коэффициентов в виде многочлена
	for (int i = a_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (a[a_degree] < 0)
				cout << "(" << a[a_degree] << ")" << endl;
			else if (a[a_degree] != 0)
				cout << a[a_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x)" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x^" << i << ")" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x^" << i << " + ";
		}
	}

	cout << "*" << endl;

	//Вывод второго массива коэффициентов в виде многочлена
	for (int i = b_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (b[b_degree] < 0)
				cout << "(" << b[b_degree] << ")" << endl;
			else if (b[b_degree] != 0)
				cout << b[b_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (b[b_degree - i] < 0)
				cout << "(" << b[b_degree - i] << "x)" << " + ";
			else if (b[b_degree - i] != 0)
				cout << b[b_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (b[b_degree - i] < 0)
				cout << "(" << b[b_degree - i] << "x^" << i << ")" << " + ";
			else if (b[b_degree - i] != 0)
				cout << b[b_degree - i] << "x^" << i << " + ";
		}
	}

	cout << "=" << endl;


	//Подсчёт результата, выделение памяти для массива, содержащего коэффициенты итогового многочлена.
	//Память для массива выделяется в соответствии с размером произведения коэффициентов двух многочленов.

	double* result_poly;
	int result_poly_degree;
	
	result_poly_degree = a_degree + b_degree;
	result_poly = (double*)malloc((result_poly_degree * 2) * sizeof(double));
	
	for (int i = 0; i <= result_poly_degree; i++) 
	{
		for (int j = 0; j < 1; j++) {
			result_poly[i + j] = 0;
		}
	}

	for (int i = 0; i <= b_degree; i++)
	{
		for (int j = 0; j <= a_degree; j++)
		{
			result_poly[i + j] += a[j] * b[i];
		}
	}



	//Вывод итогового массива коэффициентов в виде многочлена.
	for (int i = result_poly_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (result_poly[result_poly_degree] < 0)
				cout << "(" << result_poly[result_poly_degree] << ")" << endl;
			else if (result_poly[result_poly_degree] != 0)
				cout << result_poly[result_poly_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (result_poly[result_poly_degree - i] < 0)
				cout << "(" << result_poly[result_poly_degree - i] << "x)" << " + ";
			else if (result_poly[result_poly_degree - i] != 0)
				cout << result_poly[result_poly_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (result_poly[result_poly_degree - i] < 0)
				cout << "(" << result_poly[result_poly_degree - i] << "x^" << i << ")" << " + ";
			else if (result_poly[result_poly_degree - i] != 0)
				cout << result_poly[result_poly_degree - i] << "x^" << i << " + ";
		}
	}

	cout << endl;


	return result_poly;
	free(result_poly);
}//done

//Вычитание многочленов
double* PolynomialSubstraction(double* a, double* b, int a_degree, int b_degree)
{
	//Вывод первого массива коэффициентов в виде многочлена
	for (int i = a_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (a[a_degree] < 0)
				cout << "(" << a[a_degree] << ")" << endl;
			else if (a[a_degree] != 0)
				cout << a[a_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x)" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x^" << i << ")" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x^" << i << " + ";
		}
	}

	cout << "-" << endl;

	//Вывод второго массива коэффициентов в виде многочлена
	for (int i = b_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (b[b_degree] < 0)
				cout << "(" << b[b_degree] << ")" << endl;
			else if (b[b_degree] != 0)
				cout << b[b_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (b[b_degree - i] < 0)
				cout << "(" << b[b_degree - i] << "x)" << " + ";
			else if (b[b_degree - i] != 0)
				cout << b[b_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (b[b_degree - i] < 0)
				cout << "(" << b[b_degree - i] << "x^" << i << ")" << " + ";
			else if (b[b_degree - i] != 0)
				cout << b[b_degree - i] << "x^" << i << " + ";
		}
	}

	cout << "=" << endl;


	//Подсчёт результата, выделение памяти для массива, содержащего коэффициенты итогового многочлена.
	//Память для массива выделяется в соответствии с размером наибольшего из двух массива коэффициентов.

	double* result_poly;
	int result_poly_degree;


	if (a_degree >= b_degree)
	{
		result_poly_degree = a_degree;
		result_poly = (double*)malloc((a_degree + 2) * sizeof(double));
		for (int i = 0; i <= (a_degree - b_degree); i++)
		{
			result_poly[i] = a[i];
		}
		for (int i = 0; i <= a_degree; i++)
		{
			result_poly[i + (a_degree - b_degree)] = a[i + (a_degree - b_degree)] - b[i];
		}
	}
	else
	{
		result_poly_degree = b_degree;
		result_poly = (double*)malloc((b_degree + 2) * sizeof(double));
		for (int i = 0; i <= (b_degree - a_degree); i++)
		{
			result_poly[i] = b[i];
		}
		for (int i = 0; i <= b_degree; i++)
		{
			result_poly[i + (b_degree - a_degree)] = a[i] - b[i + (b_degree - a_degree)];
		}
	}


	//Вывод итогового массива коэффициентов в виде многочлена.
	for (int i = result_poly_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (result_poly[result_poly_degree] < 0)
				cout << "(" << result_poly[result_poly_degree] << ")" << endl;
			else if (result_poly[result_poly_degree] != 0)
				cout << result_poly[result_poly_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (result_poly[result_poly_degree - i] < 0)
				cout << "(" << result_poly[result_poly_degree - i] << "x)" << " + ";
			else if (result_poly[result_poly_degree - i] != 0)
				cout << result_poly[result_poly_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (result_poly[result_poly_degree - i] < 0)
				cout << "(" << result_poly[result_poly_degree - i] << "x^" << i << ")" << " + ";
			else if (result_poly[result_poly_degree - i] != 0)
				cout << result_poly[result_poly_degree - i] << "x^" << i << " + ";
		}
	}

	cout << endl;


	return result_poly;
	free(result_poly);
}//done

//Производная от многочлена
double* PolynomialDerivation(double* a, int a_degree)
{
	//Вывод первого массива коэффициентов в виде многочлена
	for (int i = a_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (a[a_degree] < 0)
				cout << "(" << a[a_degree] << ")" << endl;
			else if (a[a_degree] != 0)
				cout << a[a_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x)" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x^" << i << ")" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x^" << i << " + ";
		}
	}

	cout << "d/dx = ";
	
	//Подсчёт результата, выделение памяти для массива, содержащего коэффициенты итогового многочлена.
	//Память для массива выделяется на (1*sizeof(double)) меньше, чем для исходного многочлена.

	double* result_poly;
	int result_poly_degree;

	result_poly_degree = a_degree - 1;
	result_poly = (double*)malloc((result_poly_degree + 2) * sizeof(double));

	for (int i = 0; i <= result_poly_degree; i++)
	{
		result_poly[i] = a[i] * (a_degree - i);
	}

	//Вывод итогового массива коэффициентов в виде многочлена.
	for (int i = result_poly_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (result_poly[result_poly_degree] < 0)
				cout << "(" << result_poly[result_poly_degree] << ")" << endl;
			else if (result_poly[result_poly_degree] != 0)
				cout << result_poly[result_poly_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (result_poly[result_poly_degree - i] < 0)
				cout << "(" << result_poly[result_poly_degree - i] << "x)" << " + ";
			else if (result_poly[result_poly_degree - i] != 0)
				cout << result_poly[result_poly_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (result_poly[result_poly_degree - i] < 0)
				cout << "(" << result_poly[result_poly_degree - i] << "x^" << i << ")" << " + ";
			else if (result_poly[result_poly_degree - i] != 0)
				cout << result_poly[result_poly_degree - i] << "x^" << i << " + ";
		}
	}

	cout << endl;
	return result_poly;
	free(result_poly);
}//done

int* PolynomialDivision(int* a, int* b, int a_degree, int b_degree)
{
	//Вывод первого массива коэффициентов в виде многочлена
	for (int i = a_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (a[a_degree] < 0)
				cout << "(" << a[a_degree] << ")" << endl;
			else if (a[a_degree] != 0)
				cout << a[a_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x)" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x^" << i << ")" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x^" << i << " + ";
		}
	}

	cout << "/" << endl;

	//Вывод второго массива коэффициентов в виде многочлена
	for (int i = b_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (b[b_degree] < 0)
				cout << "(" << b[b_degree] << ")" << endl;
			else if (b[b_degree] != 0)
				cout << b[b_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (b[b_degree - i] < 0)
				cout << "(" << b[b_degree - i] << "x)" << " + ";
			else if (b[b_degree - i] != 0)
				cout << b[b_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (b[b_degree - i] < 0)
				cout << "(" << b[b_degree - i] << "x^" << i << ")" << " + ";
			else if (b[b_degree - i] != 0)
				cout << b[b_degree - i] << "x^" << i << " + ";
		}
	}

	cout << "=" << endl;


	//Подсчёт результата, выделение памяти для массива, содержащего коэффициенты частного и остатка от деления.

	int result_poly_degree = a_degree - b_degree + 1;
	int* result_poly = (int*)malloc((result_poly_degree + 1) * sizeof(int));
	
	for (int i = 0; i < result_poly_degree; i++)
	{
		result_poly[i] = 0;
	}

	for (int k = (a_degree - b_degree); k >= 0; k--)
	{
		result_poly[k] = a[k + b_degree] / b[b_degree];
		for (int j = k + b_degree - 1; j >= k; j--)
			a[j] -= b[j - k] * result_poly[k];
	}

	cout << "Частное" << endl;
	for (int i = result_poly_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (result_poly[result_poly_degree] < 0)
				cout << "(" << result_poly[result_poly_degree] << ")" << endl;
			else if (result_poly[result_poly_degree] != 0)
				cout << result_poly[result_poly_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (result_poly[result_poly_degree - i] < 0)
				cout << "(" << result_poly[result_poly_degree - i] << "x)" << " + ";
			else if (result_poly[result_poly_degree - i] != 0)
				cout << result_poly[result_poly_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (result_poly[result_poly_degree - i] < 0)
				cout << "(" << result_poly[result_poly_degree - i] << "x^" << i << ")" << " + ";
			else if (result_poly[result_poly_degree - i] != 0)
				cout << result_poly[result_poly_degree - i] << "x^" << i << " + ";
		}
	}

	cout << "Остаток:" << endl;

	for (int i = a_degree - result_poly_degree; i >= 0; i--)
	{
		if (i == 0)
		{
			if (a[a_degree] < 0)
				cout << "(" << a[a_degree] << ")" << endl;
			else if (a[a_degree] != 0)
				cout << a[a_degree] << endl;
			else
				cout << "0" << endl;
		}
		else if ((i - 1) == 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x)" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x" << " + ";
		}
		else if (i > 0)
		{
			if (a[a_degree - i] < 0)
				cout << "(" << a[a_degree - i] << "x^" << i << ")" << " + ";
			else if (a[a_degree - i] != 0)
				cout << a[a_degree - i] << "x^" << i << " + ";
		}
	}

	return result_poly;
	free(result_poly);
	
}