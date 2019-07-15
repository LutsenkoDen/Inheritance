#include<string>
#include<iostream>
#include"Humen.h"
#include"Student.h"
#include"Teacher.h"
#include"Graduate.h"
using namespace std;
//#define DEBUG

#define delimiter "\n------------------------------\n"

void main()
{
	setlocale(LC_ALL, "Russian");
	Humen h("Василий", 20);
	//h.info();
	cout << h << endl;
	Student durko("Дурко Василий", 20, "РПО");
	//durko.info();
	cout << delimiter << endl;
	cout << durko << endl;
	cout << delimiter << endl;
	Teacher pablo("Pablo Escobar", 40, "распространение наркотиков", 25, 50);
	//pablo.info();
	cout << pablo << endl;
	Graduate tony("Antonio Montana", 22, "распространение наркотиков", 5, 90, "работа с проблемной задолженностью");
	//tony.info();
	cout << tony << endl;
}