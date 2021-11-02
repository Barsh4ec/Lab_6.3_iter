#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

int Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
	return 1;
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}

int PairMax(int* a, const int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] > max && a[i] % 2 == 0)
			max = a[i];
	return max;

}

int Find(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		if (a[i] == PairMax(a, size))
			return a[i];
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));

	const int n = 20;
	int a[n];	
	int Low;
	int High;

	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;

	Create(a, n, Low, High);
	Print(a, n);
	cout << "найбільший з парних елементів масиву = " << Find(a, n);
	cout << endl;

	return 0;
}