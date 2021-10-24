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
	int min = 0;
	int max = 0;
    FillRand(arr, n);
	cout << "Исходный массив: \t\t "; Print(arr, n);
	cout << "Вывод массива в обратном направлении: \t"; ReversePrint(arr, n);
	cout << "Сумма элементов массива : " << Sum (arr,n)<< endl;
	cout << "Среднее арефметическое элементов массива :\t" << Avg (arr, n)<< endl; 
	cout << "Минимальное значение массива : \t " <<  minValueIn(arr, n, min)<< endl;
	cout << "Максимальное значение массива : \t" << maxValueIn(arr, n, max)<< endl;
	cout << "Массив в порядке возрастания :\t"; Sort(arr, n);
	
	
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
	for (int i = n - 1; i >= 0; --i)
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
	 for (int i = 0; i < n; i++)
	 {
		
		 for (int j = n-1; j > i; j--)
		 {
			 if (arr[j]  < arr[ j- 1])
			 {
				 int temp = arr[j];
				 arr[j] = arr[j - 1];
				 arr[j - 1 ] = temp;
			 }
		 }
	 }
	 for (int i = 0; i < n; i++)
	 {
		 cout << arr[i] << "\t";
	 }
	 cout << endl;
 }

