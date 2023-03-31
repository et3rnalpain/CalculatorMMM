#pragma once
//За реализацию Матричного калькулятора полностью отвечал Симонин С.А.
void input(int a[50][50], int n, int m);// ввод матрицы.
void output(int a[50][50], int& n, int& m);// вывод матрицы.
int MatrCalcMenu(); //меню матричного калькулятора.
void PlusMatr(); //Сложение матриц.
void MinMatr();	 //Вычитание матриц.
void MultMatr(); //Умножение матриц.
void MultIntMatr(); //Умножение матрицы на число.
void PlusIntMatr(); //Сложение матрицы с числом.
void MinIntMatr(); //Вычитание числа из матрицы.
void TranspMatr(); //Транспонирование матрицы.
void ReversMatr(); //Обратная матрица.
void Delet(int a[50][50], int b[50][50], int n, int stroka, int stolbec); //Функция, которая записывает квадратный массив a n размера
//в массив b n-1 размера, исключая определенную строку и столбец, вспомогательная функция для ReversMatr.
void DetMatr(); //Определитель матрицы.
int DetRekursMatr(int a[50][50], int n); //Рекурсивная подфункция функции DetMart и вспомогательная
// ReversMatr, возвращает определитель матрицы.