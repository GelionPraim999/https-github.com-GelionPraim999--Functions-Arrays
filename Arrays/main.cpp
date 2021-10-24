#include<iostream>
using namespace std;
void FillRand(int arr[], const unsigned int n);// ��������� ������ ���������� �������
void Print(int arr[], const unsigned int n);
void ReversePrint(int arr[], const unsigned int n);//������� ������ � �������� �����������
int  Sum (int arr[], const unsigned int n, int sum = 0); // ���������� ����� ��������
double Avg (int arr[],const unsigned int n); //���������� ������� �������������� �������
 int minValueIn (int arr[], const unsigned int n, int min);// ���������� ����������� �������� �������
 int maxValueIn (int arr[], const unsigned int n, int max); //���������� ������������ �������� �������
 void Sort(int arr[], const unsigned int n);// ��������� ������ � ������� �����������

void main()
{
	setlocale(LC_ALL, "");
	const unsigned int n = 5;
	int arr[n];
	int min = 0;
	int max = 0;
    FillRand(arr, n);
	cout << "�������� ������: \t\t "; Print(arr, n);
	cout << "����� ������� � �������� �����������: \t"; ReversePrint(arr, n);
	cout << "����� ��������� ������� : " << Sum (arr,n)<< endl;
	cout << "������� �������������� ��������� ������� :\t" << Avg (arr, n)<< endl; 
	cout << "����������� �������� ������� : \t " <<  minValueIn(arr, n, min)<< endl;
	cout << "������������ �������� ������� : \t" << maxValueIn(arr, n, max)<< endl;
	cout << "������ � ������� ����������� :\t"; Sort(arr, n);
	
	
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

