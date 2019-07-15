#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Humen.h"


class Student :public Humen
{
	string speciality;
	unsigned int year; // год обучения
	int rating;        // успеваемость
public:
	const string& get_speciality() const;
	unsigned int get_year() const;
	int get_rating()const;
	const string& set_speciality(const string& speciality);
	const unsigned int set_year(unsigned int year);
	int set_rating(int rating);
	// Constructors
	Student(const string& name, unsigned int age,
		const string& speciality, unsigned int year = 1, int rating = 0);
	~Student();
	// Methods
	void info();
};
ostream& operator<<(ostream& os, const Student& obj);