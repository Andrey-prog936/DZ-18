#include<iostream>
#include <fstream>
#include<string>
#include "functions.h"
#include "coloring.h"
using namespace std;



int main() {
	int action = 0;
	if (!fout.is_open()) // dont open error
	{
		cout << "File not open" << endl;
	}
	else
	{
		for (int i = 0; i < n; i++) // read info
		{
			fout >> workers[i].surname >> workers[i].name >> workers[i].age >> workers[i].zarplata;
		}
		fout.close();
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

			else if (n > size_mass)   //  size >
			{
				addWorkerELSE();
			}
			blue
				cout << "\nCan save changes to file (5)" << endl;
			def


		}break;

		case 2: //delete
		{
			deleteWorker();
		}break;
		case 3: // search
		{
			searchWorker();
		}break;
		case 4:
		{
			cout << endl;
			showWorkers();

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
			red
			cout << "Please select action (1 - 7)" << endl<<endl;
			def
		}
		}

	} while (action != 12414);

	system("pause");
	return 0;
}