#include"Humen.h"
#include"Student.h"
#include"Teacher.h"
#include"Graduate.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	Humen h("Василий", 20);
	h.info();
	Student durko("Дурко Василий", 20, "РПО");
	durko.info();
	Teacher pablo("Pablo Escobar", 40, "распространение наркотиков", 25, 50);
	pablo.info();
	Graduate tony("Antonio Montana", 22, "распространение наркотиков", 5, 90, "работа с проблемной задолженностью");
	tony.info();
}