#include<iostream>
#include<Windows.h>
using namespace std;
int Add(int a, int b); // Прототип функции
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b;
	cout << "Введите два числа : ";
	cin >> a >> b;
	int c = Add(a, b);
	cout << c << endl;
	cout << Sub(a, b) << endl;
	cout << Mul(a, b) << endl;
	cout << Div(a, b) << endl;
}

int Add(int a, int b)// Реализация
{// Addition - Сложение 
	int c = a + b;
	return c;
}

int Sub(int a, int b)
{// Subtraction- Вычитание
	return a - b;
	}
int Mul(int a, int b)
{// Multiplication
	return a * b;
}
 double Div(int a, int b)
{// Division - Деление
	return (double) a / b;
}
