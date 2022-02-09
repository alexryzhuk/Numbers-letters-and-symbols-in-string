// Numbers letters and symbols in string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a;
	int l = 0;
	int n = 0;
	int s = 0;
	a = _getch();
	getline(cin, a);//введення рядка
	int size = a.size();//визначення розміру рядка
	for (int i = 0; i < size; i++)
	{
		if ((a[i] >= 97 && a[i] <= 122)||(a[i] >= 65 && a[i] <= 90)) l++;//підрахунок літер як великих так і малих
		else if (a[i] >= 48 && a[i] <= 57) n++;//підрахунок цифр
		else s++;//підрахунок інших символів
	}
	cout << "Кількість літер у стрічці - " << l << endl;
	cout << "Кількість цифр  у стрічці - " << n << endl;
	cout << "Кількість символів у стрічці - " << s << endl;
}
