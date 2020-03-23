#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "coloring.h"
using namespace std;
struct worker
{
	string surname;
	string name;
	int age;
	string zarplata;
};

void addWorker();

void menu();

void save();

int n;//количество сотрудников
int choise = 666;
int size_mass = 5;//общий размер массива
worker* workers = new worker[size_mass];

ifstream fout("workers.txt", ios_base::app);//на чтение
ofstream fin("outWorkers.txt", ios_base::app);//на запись
void menu()
{
	cout << "1. Add new worker" << endl;
	cout << "2. Delete worker" << endl;
	cout << "3. Search worker" << endl;
	cout << "4. Show your worker" << endl;
	orange
	cout << "5. Save" << endl;
	def
	cout << "6. Clear console" << endl;
	cout << "7. Exit" << endl;
}

void addWorker()
{
	cout << "\nEnter the name of the new worker" << endl;
	cin >> workers[n - 1].surname;
	cout << "\nEnter the name of the new worker" << endl;
	cin >> workers[n - 1].name;
	cout << "\nEnter the age of the new worker" << endl;
	cin >> workers[n - 1].age;
	cout << "\nEnter the salary of the new worker" << endl;
	cin >> workers[n - 1].zarplata;
}

void save()
{
	for (int i = 0; i < n; i++) {
		fin << workers[i].surname << " " << workers[i].name << " " << workers[i].age << " " << workers[i].zarplata << endl;
	}
	cout << "\nWorkers written to file [outWorkers.txt]\n" << endl;
}
