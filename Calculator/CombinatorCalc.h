#pragma once

int AccommodationRepeat(int m, int n, int result); //���������� � �����������
int AccommodationNotRepeat(int m, int n, int result, int factorialNM, int factorialN, int factorialM); //���������� ��� ����������
int CombinnationRepeat(int m, int n, int result, int factorialNM, int factorialN, int factorialM); //�������� � �����������
int CombinnationNotRepeat(int m, int n, int result, int factorialNM, int factorialN, int factorialM); //��������� ��� ����������
int Permutation(int n, int m, int result, int factorialNM, int factorialN, int factorialM); //������������
int MainCombinator();//����
void inputMN(int& m, int& n); //���� m � n
void Factorial(int n, int m, int& factorialN, int& factorialNM, int& factorialM); //������� ����������



