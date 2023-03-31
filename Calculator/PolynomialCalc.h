#pragma once
#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

//
//	Долбенько 22-ПРИ-1
//

//Меню
void PolynomialCalcMenu();

//Ввод данных
double* PolynomialDataInput(int poly_degree); //done

//Ввод данных (целочисленных)
int* PolynomialIntDataInput(int poly_degree);

//Деление многочленов в столбик
int* PolynomialDivision(int* a, int* b, int a_degree, int b_degree); //todo

//Сложение многочленов
double* PolynomialAddition(double* a, double* b, int a_degree, int b_degree); //done

//Умножение многочлена на число
double* PolynomialMultiplication_byNumber(double* a, int a_degree, double multiply_number); //done

//Умножение многочлена на многочлен
double* PolynomialMultiplication_byPoly(double* a, double* b, int a_degree, int b_degree); //done

//Вычитание многочленов
double* PolynomialSubstraction(double* a, double* b, int a_degree, int b_degree); //done

//Производная от многочлена
double* PolynomialDerivation(double* a, int a_degree); //done