#pragma once
//�� ���������� ���������� ������������ ��������� ������� ������� �.�.
void input(int a[50][50], int n, int m);// ���� �������.
void output(int a[50][50], int& n, int& m);// ����� �������.
int MatrCalcMenu(); //���� ���������� ������������.
void PlusMatr(); //�������� ������.
void MinMatr();	 //��������� ������.
void MultMatr(); //��������� ������.
void MultIntMatr(); //��������� ������� �� �����.
void PlusIntMatr(); //�������� ������� � ������.
void MinIntMatr(); //��������� ����� �� �������.
void TranspMatr(); //���������������� �������.
void ReversMatr(); //�������� �������.
void Delet(int a[50][50], int b[50][50], int n, int stroka, int stolbec); //�������, ������� ���������� ���������� ������ a n �������
//� ������ b n-1 �������, �������� ������������ ������ � �������, ��������������� ������� ��� ReversMatr.
void DetMatr(); //������������ �������.
int DetRekursMatr(int a[50][50], int n); //����������� ���������� ������� DetMart � ���������������
// ReversMatr, ���������� ������������ �������.