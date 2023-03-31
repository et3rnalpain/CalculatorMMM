#include "Drob_Calc.h"
#include <iostream>
using namespace std;
struct Drob
{
	int chis1, znam1;
	int chis2, znam2;
	int chis3, znam3;
	int chis4;
	int cel;
};
void plus_drob()
{
	Drob drob;
	cout << "Введите дроби для сложения:" << endl;
	cin >> drob.chis1;
	cout << "--" << endl;
	cin >> drob.znam1;
	if (drob.chis1 < 0 && drob.znam1 < 0)
	{
		drob.chis1 *= -1;
		drob.znam1 *= -1;
	}
	cout << "+" << endl;
	cin >> drob.chis2;
	cout << "--" << endl;
	cin >> drob.znam2;
	if (drob.chis2 < 0 && drob.znam2 < 0)
	{
		drob.chis2 *= -1;
		drob.znam2 *= -1;
	}
	if (drob.znam1 == 0 || drob.znam2 == 0)
		cout << "Некорректное составление дроби!" << endl << "На 0 делить нельзя!" << endl << endl;
	else
	{
		if (drob.znam1 != drob.znam2)
		{
			drob.znam3 = drob.znam1 * drob.znam2;
			drob.chis3 = (drob.chis1 * (drob.znam3 / drob.znam1)) + (drob.chis2 * (drob.znam3 / drob.znam2));
		}
		else
		{
			drob.znam3 = drob.znam1;
			drob.chis3 = drob.chis1 + drob.chis2;
		}
		sokr(&drob.chis3, &drob.znam3, &drob.cel);
	}
}
void minus_drob()
{
	Drob drob;
	cout << "Введите дроби для вычитания:" << endl;
	cin >> drob.chis1;
	cout << "--" << endl;
	cin >> drob.znam1;
	if (drob.chis1 < 0 && drob.znam1 < 0)
	{
		drob.chis1 *= -1;
		drob.znam1 *= -1;
	}
	cout << "-" << endl;
	cin >> drob.chis2;
	cout << "--" << endl;
	cin >> drob.znam2;
	if (drob.chis2 < 0 && drob.znam2 < 0)
	{
		drob.chis2 *= -1;
		drob.znam2 *= -1;
	}
	if (drob.znam1 == 0 || drob.znam2 == 0)
		cout << "Некорректное составление дроби!" << endl << "На 0 делить нельзя!" << endl << endl;
	else
	{
		if (drob.znam1 != drob.znam2)
		{
			drob.znam3 = drob.znam1 * drob.znam2;
			drob.chis3 = (drob.chis1 * (drob.znam3 / drob.znam1)) - (drob.chis2 * (drob.znam3 / drob.znam2));
		}
		else
		{
			drob.znam3 = drob.znam1;
			drob.chis3 = drob.chis1 - drob.chis2;
		}
		sokr(&drob.chis3, &drob.znam3, &drob.cel);
	}
}
void umno_drob()
{
	Drob drob;
	cout << "Введите дроби для умножения:" << endl;
	cin >> drob.chis1;
	cout << "--" << endl;
	cin >> drob.znam1;
	if (drob.chis1 < 0 && drob.znam1 < 0)
	{
		drob.chis1 *= -1;
		drob.znam1 *= -1;
	}
	cout << "*" << endl;
	cin >> drob.chis2;
	cout << "--" << endl;
	cin >> drob.znam2;
	if (drob.chis2 < 0 && drob.znam2 < 0)
	{
		drob.chis2 *= -1;
		drob.znam2 *= -1;
	}
	if (drob.znam1 == 0 || drob.znam2 == 0)
		cout << "Некорректное составление дроби!" << endl << "На 0 делить нельзя!" << endl << endl;
	else
	{
		drob.chis3 = drob.chis1 * drob.chis2;
		drob.znam3 = drob.znam1 * drob.znam2;
		sokr(&drob.chis3, &drob.znam3, &drob.cel);
	}
}
void del_drob()
{
	Drob drob;
	cout << "Введите дроби для деления:" << endl;
	cin >> drob.chis1;
	cout << "--" << endl;
	cin >> drob.znam1;
	if (drob.chis1 < 0 && drob.znam1 < 0)
	{
		drob.chis1 *= -1;
		drob.znam1 *= -1;
	}
	cout << "/" << endl;
	cin >> drob.chis2;
	cout << "--" << endl;
	cin >> drob.znam2;
	if (drob.chis2 < 0 && drob.znam2 < 0)
	{
		drob.chis2 *= -1;
		drob.znam2 *= -1;
	}
	if (drob.znam1 == 0 || drob.znam2 == 0 || drob.chis2 == 0)
		cout << "Некорректное составление дроби!" << endl << "На 0 делить нельзя!" << endl << endl;
	else
	{
		drob.chis3 = drob.chis1 * drob.znam2;
		drob.znam3 = drob.znam1 * drob.chis2;
		sokr(&drob.chis3, &drob.znam3, &drob.cel);
	}
}
void sr_drob()
{
	Drob drob;
	cout << "Введите дроби для сравнения:" << endl;
	cin >> drob.chis1;
	cout << "--" << endl;
	cin >> drob.znam1;
	if (drob.chis1 < 0 && drob.znam1 < 0)
	{
		drob.chis1 *= -1;
		drob.znam1 *= -1;
	}
	cin >> drob.chis2;
	cout << "--" << endl;
	cin >> drob.znam2;
	if (drob.chis2 < 0 && drob.znam2 < 0)
	{
		drob.chis2 *= -1;
		drob.znam2 *= -1;
	}
	if (drob.znam1 == 0 || drob.znam2 == 0)
		cout << "Некорректное составление дроби!" << endl << "На 0 делить нельзя!" << endl << endl;
	else
	{
		if (drob.znam1 != drob.znam2)
		{
			drob.znam3 = drob.znam1 * drob.znam2;
			drob.chis3 = (drob.chis1 * (drob.znam3 / drob.znam1));
			drob.chis4 = (drob.chis2 * (drob.znam3 / drob.znam2));
			if (drob.chis3 != drob.chis4)
			{
				if (drob.chis3 > drob.chis4)
					cout << "Дробь " << drob.chis1 << "/" << drob.znam1 << " больше дроби " << drob.chis2 << "/" << drob.znam2 << endl;
				if(drob.chis3 < drob.chis4)
					cout << "Дробь " << drob.chis2 << "/" << drob.znam2 << " больше дроби " << drob.chis1 << "/" << drob.znam1 << endl;
			}
		}
		else
			cout << "Дроби равны" << endl;
	}

}
void sokr(int *drobchis1,int *drobznam1, int* drobcel)
{
	if (*drobchis1 < 0 && *drobznam1 < 0)
	{
		*drobchis1 *= -1;
		*drobznam1 *= -1;
	}
	if (*drobchis1 % *drobznam1 == 0)
		cout << "Ответ: " << *drobchis1 / *drobznam1 << endl;
	else if (*drobznam1 % *drobchis1 == 0)
		cout << "Ответ: 1/" << *drobznam1 / *drobchis1 << endl;
	else if (*drobchis1 % *drobznam1 != 0 && *drobznam1 % *drobchis1 != 0)
	{
		for (int i = 2; i < 10; i++)
		{
			while (*drobchis1 % i == 0 && *drobznam1 % i == 0)
			{
				*drobchis1 /= i;
				*drobznam1 /= i;
			}
		}
		if (*drobchis1 > *drobznam1)
		{
			*drobcel = *drobchis1 / *drobznam1;
			cout << "Ответ: " << *drobchis1 << "/" << *drobznam1 << " = " << *drobcel << " " << *drobchis1 - (*drobznam1 * *drobcel) << "/" << *drobznam1 << endl;
		}
		else
			cout << "Ответ: " << *drobchis1 << "/" << *drobznam1 << endl;
	}
}
void sokr_drob()
{
	Drob drob;
	int z = 0;
	cout << "1.Обычный" << endl << "2.С целой частью" << endl;
	cout << "В каком виде Вы хотите ввести дробь -> ";
	cin >> z;
	switch (z)
	{
	case 1:
	{
		cout << "Введите дробь для сокращения:" << endl;
		cin >> drob.chis1;
		cout << "--" << endl;
		cin >> drob.znam1;
		if (drob.chis1 < 0 && drob.znam1 < 0)
		{
			drob.chis1 *= -1;
			drob.znam1 *= -1;
		}
		if (drob.znam1 == 0)
			cout << "Некорректное составление дроби!" << endl << "На 0 делить нельзя!" << endl << endl;
		else
		{
			if (drob.chis1 % drob.znam1 == 0)
				cout << "Дробь после сокращения: " << drob.chis1 / drob.znam1 << endl;
			else if (drob.znam1 % drob.chis1 == 0)
				cout << "Дробь после сокращения: 1/" << drob.znam1 / drob.chis1 << endl;
			else if (drob.chis1 % drob.znam1 != 0 && drob.znam1 % drob.chis1 != 0)
			{
				for (int i = 2; i < 10; i++)
				{
					while (drob.chis1 % i == 0 && drob.znam1 % i == 0)
					{
						drob.chis1 /= i;
						drob.znam1 /= i;
					}
				}
				if (drob.chis1 > drob.znam1)
				{
					drob.cel = drob.chis1 / drob.znam1;
					cout << "Дробь после сокращения: " << drob.chis1 << "/" << drob.znam1 << " = " << drob.cel << " " << drob.chis1 - (drob.znam1 * drob.cel) << "/" << drob.znam1 << endl;
				}
				else
					cout << "Дробь после сокращения: " << drob.chis1 << "/" << drob.znam1 << endl;
			}
		}
		break;
	}
	case 2:
	{
		cout << "Введите дробь для сокращения:" << endl;
		cin >> drob.cel;
		cin >> drob.chis1;
		if (drob.chis1 < 0 && drob.znam1 < 0)
		{
			drob.chis1 *= -1;
			drob.znam1 *= -1;
		}
		//cout << "-" << endl;
		cin>> drob.znam1;
		drob.chis2 = (drob.cel * drob.znam1) + drob.chis1;
		drob.znam2 = drob.znam1;
		if (drob.chis2 < 0 && drob.znam2 < 0)
		{
			drob.chis2 *= -1;
			drob.znam2 *= -1;
		}
		if (drob.chis2 % drob.znam2 != 0 && drob.znam2 % drob.chis2 != 0)
		{
			for (int i = 2; i < 10; i++)
			{
				while (drob.chis2 % i == 0 && drob.znam2 % i == 0)
				{
					drob.chis2 /= i;
					drob.znam2 /= i;
				}
			}
			if (drob.chis2 > drob.znam2)
			{
				drob.cel = drob.chis2 / drob.znam2;
				cout << "Дробь после сокращения: " << drob.chis2 << "/" << drob.znam2 << " = " << drob.cel << " " << drob.chis2 - (drob.znam2*drob.cel) << "/" << drob.znam2 << endl;
			}
			else
			cout << "Дробь после сокращения: " << drob.chis2 << "/" << drob.znam2 << endl;
		}
		break;
	}
	default:
	{
		cout << "Введите корректный вариант!" << endl;
		break;
	}
	}
	
}
void des_drob()
{
	Drob drob;
	int z = 0;
	cout << "1.Обычный" << endl << "2.С целой частью" << endl;
	cout << "В каком виде Вы хотите ввести дробь -> ";
	cin >> z;
	switch (z)
	{
		double a, b;
		case 1:
		{
			cout << "Введите дробь для конвертации ее в десятичную:" << endl;
			cin >> drob.chis1;
			cout << "--" << endl;
			cin >> drob.znam1;
			if (drob.chis1 < 0 && drob.znam1 < 0)
			{
				drob.chis1 *= -1;
				drob.znam1 *= -1;
			}
			if (drob.znam1 == 0)
				cout << "Некорректное составление дроби!" << endl << "На 0 делить нельзя!" << endl << endl;
			else
			{
				a = drob.chis1;
				b = drob.znam1;
					cout << "Дробь после конвертации: " << a / b << endl;
			}
			break;
		}
		case 2:
		{
			cout << "Введите дробь для конвертации ее в десятичную:" << endl;
			cin >> drob.cel;
			cin >> drob.chis1;
			cin >> drob.znam1;
			if (drob.chis1 < 0 && drob.znam1 < 0)
			{
				drob.chis1 *= -1;
				drob.znam1 *= -1;
			}
			drob.chis2 = (drob.cel * drob.znam1) + drob.chis1;
			drob.znam2 = drob.znam1;
			if (drob.chis2 < 0 && drob.znam2 < 0)
			{
				drob.chis2 *= -1;
				drob.znam2 *= -1;
			}
			if (drob.znam1 == 0 || drob.znam2 == 0)
				cout << "Некорректное составление дроби!" << endl << "На 0 делить нельзя!" << endl << endl;
			else
			{
				a = drob.chis2;
				b = drob.znam2;
					cout << "Дробь после конвертации: " << a / b << endl;
			}
			break;
		}
		default:
		{
			cout << "Выберите коррекиный вариант!" << endl;
			break;
		}
	}
}
void minu()
{
	int z = 0;
	do
	{
		cout << "Калькулятор дробей (для перехода в главное меню введите 0):" << endl;
		cout << "1.Сложение дробей" << endl << "2.Вычитание дробей" << endl << "3.Умножение дробей" << endl << "4.Деление дробей" << endl;
		cout << "5.Сравнение дробей" << endl << "6.Сокращение дробей" << endl << "7.Представление дробей в десятичном формате" << endl;
		cout << endl << "Выберите вариант вычислений -> ";
		cin >> z;
		switch (z)
		{
			case 1:
			{
				plus_drob();
				break;
			}
			case 2:
			{
				minus_drob();
				break;
			}

			case 3:
			{
				umno_drob();
				break;
			}

			case 4:
			{
				del_drob();
				break;
			}

			case 5:
			{
				sr_drob();
				break;
			}

			case 6:
			{
				sokr_drob();
				break;
			}

			case 7:
			{
				des_drob();
				break;
			}
			case 0:
				break;
			default:
			{
				cout << endl << "Введите корректный вариант задания!" << endl << endl;
				break;
			}
		}
		cout << endl;
	} while (z != 0);
}