#include <iostream>
#include <fstream>
#include <cstdlib>
#include "emp.h"
using namespace std;

void menu_display()
{
	cout << "\n\n입력할 객체를 선택하세요.\n";
	cout << "1. Employee\n";
	cout << "2. Manager\n";
	cout << "3. Fink\n";
	cout << "4. Highfink\n";
}

int main()
{
	employee * pc[MAX];
	int classtype, i;
	char select_menu;
	ofstream fout;
	char ch;
	
	fout.open("data.txt", ios_base::out | ios_base::app);

	for(i =0; i < MAX; i++) {
		menu_display();

		cin >> select_menu;
		switch(select_menu) {
			case '1':
				classtype = Employee;
				pc[i] = new employee;
				break;
			case '2':
				classtype = Manager;
				pc[i] = new manager;
				break;
			case '3':
				classtype = Fink;
				pc[i] = new fink;
				break;
			case '4':
				classtype = Highfink;
				pc[i] = new highfink;
				break;
			default:
				cout << "1부터 4까지만 입력하세요.\n";
				i--;
				break;
		}

		pc[i]->SetAll();
		pc[i]->WriteAll(fout, classtype);
	}

	fout.close();

	ifstream fin;
	fin.open("data.txt", ios_base::in);

	i = 0;
	while(fin.get(ch)) {
		switch(ch) {
			case '1':
				pc[i] = new employee;
				break;
			case '2':
				pc[i] = new manager;
				break;
			case '3':
				pc[i] = new fink;
				break;
			case '4':
				pc[i] = new highfink;
				break;
		}
		pc[i++]->GetAll(fin);
	}

	return 0;;
}


