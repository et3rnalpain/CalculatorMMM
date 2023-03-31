#include <iostream>
#include "CombinatorCalc.h"
#include "Drob_Calc.h"
#include "TheoryProbablityMathStatistics.h"
#include "FuncCalc.h"
#include "MatrCalc.h"

/*#include "MatrCalc.h"
#include "Drob_Calc.h"
#include "PolynomialCalc.h"
*/

using namespace std;
int main(int arcg,char** argv)
{
	setlocale(LC_ALL, "RUS");
	int ch;
	do
	{
		system("cls");
		cout << "Выберите тип калькулятора:" << endl;
		cout << "1. Матричный калькулятор" << endl;
		cout << "2. Калькулятор обыкновенных дробей" << endl;
		cout << "3. Калькулятор формул комбинаторики" << endl;
		cout << "4. Калькулятор многочленов" << endl;
		cout << "5. Работа с функциями" << endl;
		cout << "6. Теория вероятности и математическая статистика" << endl;
		cout << "0. Завершить выполнение программы" << endl;
		cin >> ch;
		switch (ch)
		{
		case 0:exit(0);
		case 1:MatrCalcMenu();break; // Симонин С.А.
		case 2:minu(); break; // Аверченков Д.
		case 3:MainCombinator(); break; //Мизропова А.А
		case 4:break; // Долбенько Н.А.
		case 5:MenuFunc(); break; //Мазур П.В
		case 6:MainTPMS(); break; //Мизропова А.А.
		default:continue;
		}
	} while (ch != 0);
}