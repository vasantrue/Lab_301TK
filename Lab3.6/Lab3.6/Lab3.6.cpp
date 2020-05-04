// Lab3.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string> 
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;
int main()
{
	int Number = 0, Imass = 0, NumberSumm = 0;
	char c[100];
	int NumbersCount = 0;
	int *p_Imass = new int[Imass];
	string NumbersToInt;
	cout << "Enter simbols \n";
	cin >> c;
	for (int i = 0; i <= c[i]; i++) {
		if (c[i] >= '0' && c[i] <= '9')
		{	
			NumbersCount++;
			NumbersToInt += c[i];
		}
	}
	
	Number = std::stoi(NumbersToInt);
	cout << "Count Numbers \n";
	cout << NumbersCount << '\n';

	for (int j = 0; j < NumbersCount; j++) {
		p_Imass[j] = Number % 10;
		Number /= 10;
		NumberSumm += p_Imass[j];
	}
	cout << "Summ of Numbers \n";
	cout << NumberSumm;

	delete[] p_Imass;
	return 0;
}


