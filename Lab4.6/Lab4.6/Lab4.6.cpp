// Lab4.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int N = 0, S = 0, iSumm = 0, D = 0;
	cout << "Count of Numbers: \n";
	cin >> N;
	int *p_massN = new int[N];
	cout << "Enter " << N << " numbers \n";
	for (int i = 0; i < N; i++)
	{
		cin >> p_massN[i];
		S += p_massN[i];
	}
	for (int i = 0; i < N; i++)
	{
		iSumm += (p_massN[i] - S) * (p_massN[i] - S);
	}
	D = iSumm / (N - 1);
	cout << "D = " << D << "\n";
	delete[] p_massN;	

	return 0;
}


