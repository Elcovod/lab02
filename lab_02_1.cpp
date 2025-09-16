// Lab_02.1.cpp
// <Канюка Юрій>
// Лабораторна робота № 2.1.
// Лінійні програми.
// Варіант 7

#define _USE_MATH_DEFINES //вмикає константи, як от Pi
#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
	double a; //вхідний параметр
	cout << "a = ";
	cin >> a;
	//обчислення першої формули
	double pow(double base, double exponent);//оголошуємо піднесення з бібліотеки
	double z1; //результат обчислення 1-ої формули
	double f1 = pow(cos(3.0 / 8.0 * M_PI - a / 4), 2); //перша частинка першої формули, піднесена до квадрату
	double f2 = pow(cos(11.0 / 8.0 * M_PI + a / 4), 2); //друга частинка першої формули, піднесена до квадрату
	z1 = f1 - f2;
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//обчислення другої формули
	double z2;//результат
	z2 = (sqrt(2) / 2) * sin(a / 2);
	cout << "z2 = " << z2 << endl;
	cin.get();//призупиняє програму
	return 0;
}