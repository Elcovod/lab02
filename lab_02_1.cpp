// Lab_02.1.cpp
// <������ ���>
// ����������� ������ � 2.1.
// ˳��� ��������.
// ������ 7

#define _USE_MATH_DEFINES //����� ���������, �� �� Pi
#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
	double a; //������� ��������
	cout << "a = ";
	cin >> a;
	//���������� ����� �������
	double pow(double base, double exponent);//��������� ��������� � ��������
	double z1; //��������� ���������� 1-� �������
	double f1 = pow(cos(3.0 / 8.0 * M_PI - a / 4), 2); //����� �������� ����� �������, �������� �� ��������
	double f2 = pow(cos(11.0 / 8.0 * M_PI + a / 4), 2); //����� �������� ����� �������, �������� �� ��������
	z1 = f1 - f2;
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//���������� ����� �������
	double z2;//���������
	z2 = (sqrt(2) / 2) * sin(a / 2);
	cout << "z2 = " << z2 << endl;
	cin.get();//���������� ��������
	return 0;
}