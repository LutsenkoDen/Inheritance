#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Student.h"

class Graduate :public Student
{
	string diploma_theme;
public:
	const string& get_diploma_theme() const;
	const string& set_diploma_theme(const string& diploma_theme);
	// Constructors
	Graduate
	(const string& name, unsigned int age,
		const string& speciality, unsigned int year, int rating,
		const string& diploma_theme
	);
	~Graduate();
	// Methods
	void info();
};
ostream& operator<<(ostream& os, const Graduate& obj);