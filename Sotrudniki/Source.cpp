#include<iostream>
#include <fstream>
#include<string>
#include "functions.h"
#include "coloring.h"
using namespace std;



void addWorker();

void menu();

void save();

int main() {
	//////////////////////////////////////////
	int action = 0;

	//////////////////////////////////////////
	if (!fout.is_open())//если файл не откроетс€
	{
		cout << "File not open" << endl;
	}
	else
	{
		
		for (int i = 0; i < n; i++)//считываю данные
		{
			fout >> workers[i].surname >> workers[i].name >> workers[i].age >> workers[i].zarplata;
		}
		 //«акрываем файл
		// fout.close();
	}
	
	do
	{
		
		menu();
		cout << "Select action: ";
		cin >> action;

		switch (action)
		{
		case 1:
		{
			n++;
			if (n <= size_mass)
			{
				addWorker();
			}

			else if (n > size_mass)   //  если превышает размер массива
			{
				worker* temp = new worker[size_mass];// временный массив дл€ хранени€ старых данных
				for (int i = 0; i < n - 1; i++)
				{
					temp[i].name = workers[i].name;
					temp[i].surname = workers[i].surname;
					temp[i].age = workers[i].age;
					temp[i].zarplata = workers[i].zarplata;
				}
				delete[] workers;
				size_mass = size_mass * 2;
				workers = new worker[size_mass];
				for (int i = 0; i < n - 1; i++)   // записиваю данные в новй увеличеный массив
				{
					workers[i].name = temp[i].name;
					workers[i].surname = temp[i].surname;
					workers[i].age = temp[i].age;
					workers[i].zarplata = temp[i].zarplata;
				}

				addWorker();

				delete[] temp;
			}
			cout << "\nCan save changes to file (5)" << endl;



		}break;

		case 2:
		{


		}break;
		case 3:
		{


		}break;
		case 4:
		{
			cout << endl;
			cout << "\nYour workers:\n";
			for (int i = 0; i < n; i++)
			{
				cout << workers[i].surname << " " << workers[i].name << " " << workers[i].age << " " << workers[i].zarplata << endl;
			}
			cout << endl;


		}break;
		case 5:
		{
			green
			save();
			def
		}break;
		case 6:
		{
			system("cls");
		}break;
		case 7:
		{
			return 0;
		}break;

		default: {
			cout << "Please select action (1 - 3)" << endl;
		}
		}

	} while (action != 12414);

	system("pause");
	return 0;
}