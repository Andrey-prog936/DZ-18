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
	int zarplata;
};

void addWorker();

void menu();

void save();

int n; // count workers
int size_mass = 10; // temp size mass
worker* workers = new worker[size_mass]; // main mass

ifstream fout("outWorkers.txt", ios_base::app); // read
ofstream fin("outWorkers.txt", ios_base::app); // write
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
	cout << "\nEnter the surname of the new worker: ";
	cin >> workers[n - 1].surname;
	cout << "\nEnter the name of the new worker: ";
	cin >> workers[n - 1].name;
	cout << "\nEnter the age of the new worker: ";
	cin >> workers[n - 1].age;
	cout << "\nEnter the salary of the new worker: ";
	cin >> workers[n - 1].zarplata;
}

void addWorkerELSE()
{
	worker* temp = new worker[size_mass];// temp mass
	for (int i = 0; i < n - 1; i++)
	{
		temp[i].name = workers[i].name;
		temp[i].surname = workers[i].surname;
		temp[i].age = workers[i].age;
		temp[i].zarplata = workers[i].zarplata;
	}
	delete[] workers; // del mass
	size_mass = size_mass * 2; // size*2
	workers = new worker[size_mass]; // new mass
	for (int i = 0; i < n - 1; i++)   // write temp mass v new mass
	{
		workers[i].name = temp[i].name;
		workers[i].surname = temp[i].surname;
		workers[i].age = temp[i].age;
		workers[i].zarplata = temp[i].zarplata;
	}

	addWorker();

	delete[] temp; // del temp mass
}

void deleteWorker()
{

}

void searchWorker()
{
	
}
		

void showWorkers()
{
	const int N = 256;
	char S[N];

	ifstream in1("outWorkers.txt"); // open fileeeee
	while (!in1.eof()) // cycle read
	{
		in1.getline(S, N); // write in S
		cout << S << endl; // cout
	}
	in1.close();  //close filee
}

void save()
{
	for (int i = 0; i < n; i++) {
		fin << workers[i].surname << " " << workers[i].name << " "
			<< workers[i].age << " " << workers[i].zarplata << endl;
	}
	cout << "\n\tWorkers written to file [outWorkers.txt]\n" << endl;
}
