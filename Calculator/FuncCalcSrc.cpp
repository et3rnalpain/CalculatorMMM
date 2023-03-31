#include "FuncCalc.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <SDL.h>

using namespace std;

double Polynom(double x, int N, double a[])
{
	double summ = 0;
	for (int n = 0; n < N; n++) 
	{
		summ += a[n] * pow(x, n);
	}
	return summ;
}


double Stepennaya(double x, int a, int b, int c) 
{
	return a * pow(x, b) + c;
}
double Pokazatelnaya(double x, int a, int b, int c, int d) 
{
	return a * pow(b, c * x) + d;
}
double Logs(double x, double a, double b, double c) 
{
	return a * log(b*x) + c;
}
double Sinusoida(double x, double a, double b, double c, double d) 
{
	return a * sin(b * x + c) + d;
}
double Cosinusoida(double x, double a, double b, double c, double d)
{
	return a * cos(b * x + c) + d;
}

double Integral() 
{
	double summ = 0.0;
	int a = 0; int b = 1; double n = 10000.0; int num; double kf[30]; int stepen; double h = 0.0; double x = 0.0;
	cout << "Введите номер функции" << endl;
	cout << "1. Полином степени N (a0 + a1*x + a2*x^1 + ... aN*x^N)" << endl;
	cout << "2. Степенная (a*x^b+c)" << endl;
	cout << "3. Показательная (a*b^(c*x)+d)" << endl;
	cout << "4. Логарифмическая (a*ln(b*x)+c)" << endl;
	cout << "5. Синусоида (a*sin(b*x+c)+d)" << endl;
	cout << "6. Косинусоида (a*cos(b*x+c)+d)" << endl;
	cin >> num;
	cout << "Введите пределы интегрирования (b>a)" << endl;
	cout << "a:"; cin >> a;
	cout << "b:"; cin >> b;
	if (a >= b)
	{
		cout << "Нижний предел больше верхнего" << endl;
		return 1.0;
	}
	switch (num)
	{
		case 1:
		{
			cout << "Введите степень полинома ( N < 30)" << endl;
			cin >> stepen;
			if (stepen > 30 || stepen < 1) { cout << "Неправильное значение степени полинома" << endl; return 1.0; }
			for (int i = 0; i < stepen; i++)
			{
				cout << "Введите коэффициет a" << i << ":" << endl;
				cin >> kf[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (i == 0) {
					summ += Polynom(i * (b - a) / (n), stepen, kf);
				}
				else if (i % 2 == 0) summ += 4 * Polynom(i * (b - a) / (n), stepen, kf);
				else if (i % 2 == 1) summ += 2 * Polynom(i * (b - a) / (n), stepen, kf);
			}
			cout << setprecision(5) << ((b - a) / (n * 3)) * summ;
		}
			break;
		case 2:
		{
			double A; int B; double C;
			cout << "Введите а "; cin >> A;
			cout << "Введите степень b "; cin >> B;
			cout << "Введите c "; cin >> C;
			for (int i = 0; i < n; i++)
			{
				if (i == 0) {
					summ += Stepennaya(i * (b - a) / (n), A, B, C);
				}
				else if (i % 2 == 0) summ += 4 * Stepennaya(i * (b - a) / (n), A, B, C);
				else if (i % 2 == 1) summ += 2 * Stepennaya(i * (b - a) / (n), A, B, C);
			}
			cout << setprecision(5) << ((b - a) / (n * 3)) * summ;
		}
			break;
		case 3:
		{
			double A1; int B1; double C1; double D1;
			cout << "Введите а "; cin >> A1;
			cout << "Введите b "; cin >> B1;
			cout << "Введите c "; cin >> C1;
			cout << "Введите d "; cin >> D1;
			for (int i = 0; i < n; i++)
			{
				if (i == 0) {
					summ += Pokazatelnaya(i * (b - a) / (n), A1, B1, C1, D1);
				}
				else if (i % 2 == 0) summ += 4 * Pokazatelnaya(i * (b - a) / (n), A1, B1, C1, D1);
				else if (i % 2 == 1) summ += 2 * Pokazatelnaya(i * (b - a) / (n), A1, B1, C1, D1);
			}
			cout << setprecision(5) << ((b - a) / (n * 3)) * summ;
		}
			break;
		case 4:
		{
			double A2; double B2; double C2;
			cout << "Введите а "; cin >> A2;
			cout << "Введите b "; cin >> B2;
			cout << "Введите c "; cin >> C2;
			h = (b - a) / n;
			for (int i = 0; i < n; i++)
			{
				x = a + i * h;
				summ += Logs(x, A2, B2, C2);
			}
			summ *= h;
			cout << setprecision(5) << summ;
		}
			break;
		case 5:
		{
			double A3; int B3; double C3; double D3;
			cout << "Введите а "; cin >> A3;
			cout << "Введите b "; cin >> B3;
			cout << "Введите c "; cin >> C3;
			cout << "Введите d "; cin >> D3;
			h = (b - a) / n;
			for (int i = 0; i < n; i++)
			{
				x = a + i * h;
				summ += Sinusoida(x, A3, B3, C3, D3);
			}
			summ *= h;
			cout << setprecision(5) << summ;
		}
		break;
		case 6:
		{
			double A4; int B4; double C4; double D4;
			cout << "Введите а "; cin >> A4;
			cout << "Введите b "; cin >> B4;
			cout << "Введите c "; cin >> C4;
			cout << "Введите d "; cin >> D4;
			h = (b - a) / n;
			for (int i = 0; i < n; i++)
			{
				x = a + i * h;
				summ += Cosinusoida(x, A4, B4, C4, D4);
			}
			summ *= h;
			cout << setprecision(5) << summ;
		}
		break;
		default: break;
			return 1.0;
	}
}
double Dihotomia() 
{
	int num, stepen; double kf[30];
	double e = 0.00000000001;
	double c,c2;
	double a, b,a2,b2;
	cout << "Введите номер функции" << endl;
	cout << "1. Полином степени N (a0 + a1*x + a2*x^1 + ... aN*x^N)" << endl;
	cout << "2. Степенная (a*x^b+c)" << endl;
	cout << "3. Показательная (a*b^(c*x)+d)" << endl;
	cout << "4. Логарифмическая (a*ln(b*x)+c)" << endl;
	cout << "5. Синусоида (a*sin(b*x+c)+d)" << endl;
	cout << "6. Косинусоида (a*cos(b*x+c)+d)" << endl;
	cin >> num;
	cout << "Введите пределы поиска корня (b>a)" << endl;
	cout << "a:"; cin >> a;
	cout << "b:"; cin >> b;
	if (a >= b)
	{
		cout << "Нижний предел больше верхнего" << endl;
		return 1.0;
	}
	switch (num)
	{
	case 1: 
	{
		cout << "Введите степень полинома ( N < 30)" << endl;
		cin >> stepen;
		if (stepen > 30 || stepen < 1) { cout << "Неправильное значение степени полинома" << endl; return 1.0; }
		for (int i = 0; i < stepen; i++)
		{
			cout << "Введите коэффициет a" << i << ":" << endl;
			cin >> kf[i];
		}
		do 
		{
			c = (a + b) / 2;
			if (Polynom(c, stepen, kf) > 0) b = c;
			else a = c;
		} while (fabs(Polynom(c, stepen, kf)) > e);
		cout << "Корень равен " << c << endl; 

	}
	break;
	case 2: 
	{
		double A; int B; double C;
		cout << "Введите а "; cin >> A;
		cout << "Введите степень b "; cin >> B;
		cout << "Введите c "; cin >> C;
		do
		{
			c = (a + b) / 2;
			if (Stepennaya(c,A,B,C) > 0) b = c;
			else a = c;
		} while (fabs(Stepennaya(c, A, B, C)) > e);
		cout << "Корень равен " << c << endl;
	} break;
	case 3: 
	{
		double A1; int B1; double C1; double D1;
		cout << "Введите а "; cin >> A1;
		cout << "Введите b "; cin >> B1;
		cout << "Введите c "; cin >> C1;
		cout << "Введите d "; cin >> D1;
		do
		{
			c = (a + b) / 2;
			if (Pokazatelnaya(c, A1, B1, C1,D1) > 0) b = c;
			else a = c;
		} while (fabs(Pokazatelnaya(c, A1, B1, C1, D1)) > e);
		cout << "Корень равен " << c << endl;
	}break;
	case 4: 
	{
		double A2; double B2; double C2;
		cout << "Введите а "; cin >> A2;
		cout << "Введите b "; cin >> B2;
		cout << "Введите c "; cin >> C2;
		do
		{
			c = (a + b) / 2;
			if (Logs(c, A2, B2, C2) > 0) b = c;
			else a = c;
		} while (fabs(Logs(c, A2, B2, C2)) > e);
		cout << "Корень равен " << c << endl;
	} break;
	case 5: {double A3; int B3; double C3; double D3;
		cout << "Введите а "; cin >> A3;
		cout << "Введите b "; cin >> B3;
		cout << "Введите c "; cin >> C3;
		cout << "Введите d "; cin >> D3;
		do
		{
			c = (a + b) / 2;
			if (Sinusoida(c, A3, B3, C3, D3) > 0) b = c;
			else a = c;
		} while (fabs(Sinusoida(c, A3, B3, C3, D3)) > e); cout << "Корень равен " << c << endl; } break;
	case 6: {
		double A4; int B4; double C4; double D4;
		cout << "Введите а "; cin >> A4;
		cout << "Введите b "; cin >> B4;
		cout << "Введите c "; cin >> C4;
		cout << "Введите d "; cin >> D4;
		do
		{
			c = (a + b) / 2;
			if (Cosinusoida(c, A4, B4, C4, D4) > 0) b = c;
			else a = c;
		} while (fabs(Cosinusoida(c, A4, B4, C4, D4)) > e); cout << "Корень равен " << c << endl;
	} break;
	default:
		break;
	}
}
double FuncGraph()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	int w = 800;
	int he = 600;
	SDL_Window* window = SDL_CreateWindow("Graph", 300, 200, w, he, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window,-1,0);
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
	SDL_RenderClear(renderer);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
	SDL_RenderDrawLine(renderer, 0, he / 2, w, he / 2);
	SDL_RenderDrawLine(renderer, w / 2, 0, w / 2, he);
	SDL_RenderDrawLine(renderer, w, he / 2, w - 10, he / 2 + 10);
	SDL_RenderDrawLine(renderer, w, he / 2, w - 10, he / 2 - 10);
	SDL_RenderDrawLine(renderer, w / 2, 0, w / 2 + 10, 10);
	SDL_RenderDrawLine(renderer, w / 2, 0, w / 2 - 10, 10);
	double summ = 0.0;
	int a = 0; int b = 1; double n = 10000.0; int num; double kf[30]; int stepen; double h = 0.0; double x = 0.0; double koef = 10;
	cout << "Введите номер функции" << endl;
	cout << "1. Полином степени N (a0 + a1*x + a2*x^1 + ... aN*x^N)" << endl;
	cout << "2. Степенная (a*x^b+c)" << endl;
	cout << "3. Показательная (a*b^(c*x)+d)" << endl;
	cout << "4. Логарифмическая (a*ln(b*x)+c)" << endl;
	cout << "5. Синусоида (a*sin(b*x+c)+d)" << endl;
	cout << "6. Косинусоида (a*cos(b*x+c)+d)" << endl;
	cin >> num;
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
	switch (num)
	{
	case 1: {
		cout << "Введите степень полинома ( N < 30)" << endl;
		cin >> stepen;
		if (stepen > 30 || stepen < 1) { cout << "Неправильное значение степени полинома" << endl; return 1.0; }
		for (int i = 0; i < stepen; i++)
		{
			cout << "Введите коэффициет a" << i << ":" << endl;
			cin >> kf[i];
		}
		for (double i = -400; i < 400; i+=0.01)
		{
			SDL_RenderDrawPoint(renderer,  w / 2 + koef * (i), he / 2 - koef * (Polynom(i, stepen, kf)));
		}
	} break;
	case 2: 
	{
		double A; int B; double C;
		cout << "Введите а "; cin >> A;
		cout << "Введите степень b "; cin >> B;
		cout << "Введите c "; cin >> C;
		for (double i = -400; i < 400; i += 0.01)
		{
			SDL_RenderDrawPoint(renderer, w / 2 + koef * (i), he / 2 - koef * (Stepennaya(i,A,B,C)));
		}
	
	}
		  break;
	case 3: 
	{
		double A1; int B1; double C1; double D1;
		cout << "Введите а "; cin >> A1;
		cout << "Введите b "; cin >> B1;
		cout << "Введите c "; cin >> C1;
		cout << "Введите d "; cin >> D1;
		for (double i = -400; i < 400; i += 0.01)
		{
			SDL_RenderDrawPoint(renderer, w / 2 + koef * (i), he / 2 - koef * (Pokazatelnaya(i, A1, B1, C1, D1)));
		}
	} break;
	case 4: 
	{
		double A2; double B2; double C2;
		cout << "Введите а "; cin >> A2;
		cout << "Введите b "; cin >> B2;
		cout << "Введите c "; cin >> C2;
		for (double i = -400; i < 400; i += 0.01)
		{
			SDL_RenderDrawPoint(renderer, w / 2 + koef * (i), he / 2 - koef * (Logs(i, A2, B2, C2)));
		}
	} break;
	case 5: 
	{
		double A3; int B3; double C3; double D3;
		cout << "Введите а "; cin >> A3;
		cout << "Введите b "; cin >> B3;
		cout << "Введите c "; cin >> C3;
		cout << "Введите d "; cin >> D3;
		for (double i = -400; i < 400; i += 0.01)
		{
			SDL_RenderDrawPoint(renderer, w / 2 + koef * (i), he / 2 - koef * (Sinusoida(i, A3, B3, C3, D3)));
		}
	} break;
	case 6: 
	{
		double A4; int B4; double C4; double D4;
		cout << "Введите а "; cin >> A4;
		cout << "Введите b "; cin >> B4;
		cout << "Введите c "; cin >> C4;
		cout << "Введите d "; cin >> D4;
		for (double i = -400; i < 400; i += 0.01)
		{
			SDL_RenderDrawPoint(renderer, w / 2 + koef * (i), he / 2 - koef * (Cosinusoida(i, A4, B4, C4, D4)));
		}
	} break;
	default:
		break;
	}
	SDL_RenderPresent(renderer);
	SDL_Delay(15000);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
double Extremum()
{
	double summ = 0.0;
	int a = 0; int b = 1; double n = 100000.0; int num; double kf[30]; int stepen; double h = 0.0; double x = 0.0; double max = -10000; double min = 10000; double xi = NULL; double xa = NULL; double xmax, xmin;
	double L = 0, R = 15;
	cout << "Введите номер функции" << endl;
	cout << "1. Полином степени N (a0 + a1*x + a2*x^1 + ... aN*x^N)" << endl;
	cout << "2. Степенная (a*x^b+c)" << endl;
	cout << "3. Показательная (a*b^(c*x)+d)" << endl;
	cout << "4. Логарифмическая (a*ln(b*x)+c)" << endl;
	cout << "5. Синусоида (a*sin(b*x+c)+d)" << endl;
	cout << "6. Косинусоида (a*cos(b*x+c)+d)" << endl;
	cin >> num;
	cout << "Введите пределы поиска экстремума (b>a)" << endl;
	cout << "a:"; cin >> L;
	cout << "b:"; cin >> R;
	if (L >= R)
	{
		cout << "Нижний предел больше верхнего" << endl;
		return 1.0;
	}
	switch (num)
	{
	case 1: //Работает неккоректно
	{
		cout << "Введите степень полинома ( N < 30)" << endl;
		cin >> stepen;
		if (stepen > 30 || stepen < 1) { cout << "Неправильное значение степени полинома" << endl; return 1.0; }
		for (int i = 0; i < stepen; i++)
		{
			cout << "Введите коэффициет a" << i << ":" << endl;
			cin >> kf[i];
		}
		for (double i = 1; i < n; i++)
		{
			if((Polynom(i*(R-L)/n,stepen,kf) - Polynom((i-1) * (R - L) / n, stepen, kf))<=0.00001 && (Polynom(i * (R - L) / n, stepen, kf) - Polynom((i - 1) * (R - L) / n, stepen, kf))>=0 && Polynom(i * (R - L) / n, stepen, kf) > max)
			{
				max = Polynom(i * (R - L) / n, stepen, kf);
				xa = i * (R - L) / n;
			}
			if ((Polynom(i * (R - L) / n, stepen, kf) - Polynom((i - 1) * (R - L) / n, stepen, kf)) >= -0.00001 && (Polynom(i * (R - L) / n, stepen, kf) - Polynom((i - 1) * (R - L) / n, stepen, kf)) <= 0 && Polynom(i * (R - L) / n, stepen, kf) < min)
			{
				min = Polynom(i * (R - L) / n, stepen, kf);
				xi = i * (R - L) / n;
			}
		}
		if (xa != NULL) {
			cout << "Экстремум имеет координаты x =" << xa << " y = " << Polynom(xa, stepen, kf) << endl;
		}
		if (xi != NULL) {
			cout << "Экстремум имеет координаты x =" << xi << " y = " << Polynom(xi, stepen, kf) << endl;
		}
		
	}
	break;
	case 2:
	{
		double A; int B; double C;
		cout << "Введите а "; cin >> A;
		cout << "Введите степень b "; cin >> B;
		cout << "Введите c "; cin >> C;
		if ((A * B * pow(L, B - 1) < 0 && A * B * pow(R, B - 1) < 0) || (A * B * pow(L, B - 1) > 0 && A * B * pow(R, B - 1) > 0)) cout << "Точек экстремума на указанном промежутке не найдено" << endl;
		else if (A * B * pow(L, B - 1) > 0 && A * B * pow(R, B - 1) < 0) { cout << "Точка максимума имеет координаты x = 0 y =" << Stepennaya(0, A, B, C); }
		else if (A * B * pow(L, B - 1) < 0 && A * B * pow(R, B - 1) > 0) { cout << "Точка минимума имеет координаты x = 0 y =" << Stepennaya(0, A, B, C); }

	}
	break;
	case 3: cout << "Показательная функция вида a*b^(c*x)+c, монотонна, поэтому экстремумов не имеет" << endl; break;
	case 4: cout << "Логарифмическая функция вида a*ln(b*x)+c, монотонна, поэтому экстремумов не имеет" << endl; break;
	case 5:
	{
		double A3; int B3; double C3; double D3;
		cout << "Введите а "; cin >> A3;
		cout << "Введите b "; cin >> B3;
		cout << "Введите c "; cin >> C3;
		cout << "Введите d "; cin >> D3;
		xmax = M_PI/(2 * B3) - C3 / B3;
		xmin = xmax + M_PI / B3;
		for (int z = -1000; z < 1000; z++)
		{
			if (xmax + (2 * M_PI * z / B3) > L  && xmax + (2 * M_PI * z / B3) < R ) cout << "Точка максимума имеет координаты x= " << xmax + (2 * M_PI * z / B3) << " y = " << A3 + D3 << endl;
			if (xmin + (2 * M_PI * z / B3) > L  && xmin + (2 * M_PI * z / B3) < R ) cout << "Точка минимума имеет координаты x= " << xmin + (2 * M_PI * z / B3) << " y = " << -(A3 + D3) << endl;
		}
	}
	break;
	case 6:
	{
		double A4; int B4; double C4; double D4;
		cout << "Введите а "; cin >> A4;
		cout << "Введите b "; cin >> B4;
		cout << "Введите c "; cin >> C4;
		cout << "Введите d "; cin >> D4;
		xmin = -C4 / B4 + M_PI / B4;
		xmax = xmin + M_PI / B4;
		for (int z = -1000; z < 1000; z++)
		{
			if (xmax + (2 * M_PI * z / B4) > L  && xmax + (2 * M_PI * z / B4) < R) cout << "Точка максимума имеет координаты x= " << xmax + (2 * M_PI * z / B4) << " y = " << A4 + D4 << endl;
			if (xmin + (2 * M_PI * z / B4) > L  && xmin + (2 * M_PI * z / B4) < R) cout << "Точка минимума имеет координаты x= " << xmin + (2 * M_PI * z / B4) << " y = " << -(A4 + D4) << endl;
		}
	}break;
	}
		return 0;
}

int MenuFunc() 
{
	int choise;
	do
	{
		cout << "Выберите формулу:" << endl;
		cout << "1. Найти интеграл от А до Б" << endl;
		cout << "2. Найти корень y=0 на отрезке от А до Б" << endl;
		cout << "3. Построить график функции" << endl;
		cout << "4. Поиск экстремумов функции" << endl;
		cout << "0. Перейти к выбору типа калькулятора" << endl;
		cin >> choise;
		switch (choise)
		{
		case 0: return 0;
		case 1: Integral(); break;
		case 2: Dihotomia(); break;
		case 3: FuncGraph(); break;
		case 4: Extremum(); break;
		default: continue;
		}
		cout << endl;
	} while (choise != 0);
	return 0;
}