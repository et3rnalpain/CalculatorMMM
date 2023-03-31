#pragma once

int AccommodationRepeat(int m, int n, int result); //размещение с повторением
int AccommodationNotRepeat(int m, int n, int result, int factorialNM, int factorialN, int factorialM); //размещение без повторений
int CombinnationRepeat(int m, int n, int result, int factorialNM, int factorialN, int factorialM); //сочетние с повторением
int CombinnationNotRepeat(int m, int n, int result, int factorialNM, int factorialN, int factorialM); //сочетание без повторений
int Permutation(int n, int m, int result, int factorialNM, int factorialN, int factorialM); //перестановка
int MainCombinator();//меню
void inputMN(int& m, int& n); //ввод m и n
void Factorial(int n, int m, int& factorialN, int& factorialNM, int& factorialM); //подсчёт факториала



