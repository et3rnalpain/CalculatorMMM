#pragma once
#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

//
//	��������� 22-���-1
//

//����
void PolynomialCalcMenu();

//���� ������
double* PolynomialDataInput(int poly_degree); //done

//���� ������ (�������������)
int* PolynomialIntDataInput(int poly_degree);

//������� ����������� � �������
int* PolynomialDivision(int* a, int* b, int a_degree, int b_degree); //todo

//�������� �����������
double* PolynomialAddition(double* a, double* b, int a_degree, int b_degree); //done

//��������� ���������� �� �����
double* PolynomialMultiplication_byNumber(double* a, int a_degree, double multiply_number); //done

//��������� ���������� �� ���������
double* PolynomialMultiplication_byPoly(double* a, double* b, int a_degree, int b_degree); //done

//��������� �����������
double* PolynomialSubstraction(double* a, double* b, int a_degree, int b_degree); //done

//����������� �� ����������
double* PolynomialDerivation(double* a, int a_degree); //done