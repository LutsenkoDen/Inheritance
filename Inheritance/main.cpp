#include"Humen.h"
#include"Student.h"
#include"Teacher.h"
#include"Graduate.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	Humen h("�������", 20);
	h.info();
	Student durko("����� �������", 20, "���");
	durko.info();
	Teacher pablo("Pablo Escobar", 40, "��������������� ����������", 25, 50);
	pablo.info();
	Graduate tony("Antonio Montana", 22, "��������������� ����������", 5, 90, "������ � ���������� ��������������");
	tony.info();
}