// ivan 12.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной 
//B (A — входной, B — выходной параметр; оба параметра являются вещественными).
//С помощью этой функции найти третьи степени пяти данных чисел.

#include <iostream>
#include <cmath>
using namespace std;

void PowerA3(double a, double& b)
{
	b = a * a * a;
}

int main()
{
	double x, y;
	int i;
	for (i = 0; i < 5; i++) {
		cin >> x;
		y = pow(x, 3);
		cout << y << endl;
	}
	return 0;

}