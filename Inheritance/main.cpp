#include<string>
#include<iostream>
#include"Humen.h"
#include"Student.h"
#include"Teacher.h"
#include"Graduate.h"
using namespace std;
//#define DEBUG
#define INHERITANCE
//#define POINTERS_TO_BASE_CLASS
#define delimiter "\n------------------------------\n"

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef INHERITANCE
	Humen h("�������", 20);
	//h.info();
	//cout << h << endl;
	Student durko("����� �������", 20, "���");
	//durko.info();
	cout << delimiter << endl;
	//cout << durko << endl;
	cout << delimiter << endl;
	Teacher pablo("Pablo Escobar", 40, "��������������� ����������", 25, 50);
	//pablo.info();
	//cout << pablo << endl;
	Graduate tony("Antonio Montana", 22, "��������������� ����������", 5, 90, "������ � ���������� ��������������");
	//tony.info();
	//cout << tony << endl;
#endif // INHERITANCE

#ifdef POINTERS_TO_BASE_CLASS
	Humen* p_h = &h;
	p_h->info();
	Humen* p_teacher = &pablo;
	p_teacher->info();
	Humen* p_student = &durko;
	p_student->info();
	Humen* p_graduate = &tony;
	p_graduate->info();
#endif // POINTERS_TO_BASE_CLASS

	Humen* group[] =
	{
		new Student("����� �������", 20, "���"),
		new Teacher("Pablo Escobar", 40, "��������������� ����������", 25, 50),
		new Graduate("Antonio Montana", 22, "��������������� ����������", 5, 90, "������ � ���������� ��������������"),
		new Teacher("Albert Enstein", 150,"phisics", 120, 8)
	};
	for (int i = 0; i < sizeof(group) / sizeof(Humen*); i++)
	{
		//group[i]->info();
		/*if (typeid(*group[i]) == typeid(Student)) cout << *(Student*)group[i] << endl;
		if (typeid(*group[i]) == typeid(Teacher)) cout << *(Teacher*)group[i] << endl;
		if (typeid(*group[i]) == typeid(Graduate)) cout << *(Graduate*)group[i] << endl;*/
		if (typeid(*group[i]) == typeid(Student))
			cout << *dynamic_cast<Student*> (group[i]) << endl;
		if (typeid(*group[i]) == typeid(Teacher))
			cout << *dynamic_cast<Teacher*> (group[i]) << endl;
		if (typeid(*group[i]) == typeid(Graduate))
			cout << *dynamic_cast<Graduate*> (group[i]) << endl;


	}
}