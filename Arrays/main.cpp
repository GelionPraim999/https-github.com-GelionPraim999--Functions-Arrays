#include<iostream>
using namespace std;
void FillRand(int arr[], const unsigned int n);// Заполняет массив случайными числами
void Print(int arr[], const unsigned int n);
void ReversePrint(int arr[], const unsigned int n);//Выводит массив в обратном направлении
int  Sum (int arr[], const unsigned int n, int sum = 0); // Возвращает сумму элемента
double Avg (int arr[],const unsigned int n); //Возвращает среднее арифмитическое массива
 int minValueIn (int arr[], const unsigned int n, int min);// Возвращает минимальное значение массива
 int maxValueIn (int arr[], const unsigned int n, int max); //Возвращает максимальное значение массива
 void Sort(int arr[], const unsigned int n);// Сортирует массив в порядке возрастания

void main()
{
	setlocale(LC_ALL, "");
	const unsigned int n = 5;
	int arr[n];
	int sum = 0;
	double avg = 0;
	int min = 0;
	int max = 0;
	FillRand(arr, n);
	Print(arr, n);
	ReversePrint(arr,n);
	double s = (double)Sum(arr, n);
	cout << "Сумма элементов массива : " << s << endl;
	
	cout << "Среднее арефметическое элементов массива :" << Avg (arr, n) << endl;
	minValueIn(arr, n, min);
	maxValueIn(arr, n, max);
	Sort(arr, n);
	cout << "Массив в порядке возрастания :" << endl;
    Print(arr, n);
}
void FillRand(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void ReversePrint(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "  \t";
	}
	cout << "\n";

	for (int i = n - 1; i > 0; --i)
	{
		cout << arr[i] << "  \t";
	}
	cout << endl;
	
}
int  Sum(int arr[], const unsigned int n, int sum )
{
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const unsigned int n)
{
	return (double)Sum(arr, n) / n;
}
 int minValueIn(int arr[], const unsigned int n, int min)
{
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min ;
}
 int maxValueIn(int arr[], const unsigned int n, int max)
 {
	 max = arr[0];
	 for (int i = 0; i < n; i++)
	 {
		 if (max < arr[i]) max = arr[i];
	 }
	 return max;
 }
 void Sort(int arr[], const unsigned int n)
 {
	 for (int i = 1; i < n; i++)
	 {
		 int tmp = arr[i];
		 for (int j = i-1; j >= 0; j--)
		 {
			 if (arr[j] > tmp)
			 {
				 arr[j + 1] = arr[j];
				 arr[j] = tmp;
			 }
		 }
	 }
 }
