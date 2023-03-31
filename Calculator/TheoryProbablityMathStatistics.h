#pragma once

double Probablity(double result); // вероятность
double Dispersion(double array[50], double mathwait, int count, double result, double mathwait2); //дисперсия
double MathWaitingPOW2(double array[50], double& mathwait2, int count); //мат ожидание в квадрате
double MathWaiting(double array[50], double& mathwait, int count); //мат ожидание
void input(double array[50], int& count); //ввод
int MainTPMS(); //меню