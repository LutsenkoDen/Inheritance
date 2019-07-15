#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Humen.h"

class Teacher :public Humen
{
	string speciality;
	unsigned int xp;
	int evil; // уровень злости
public:
	const string& get_speciality() const;
	unsigned int get_xp() const;
	int get_evil() const;
	const string& set_speciality(const string& speciality);
	const unsigned int set_xp(unsigned int xp);
	int set_evil(int evil);
	// Constructors
	Teacher(const string& name, unsigned int age,
		const string& speciality, unsigned int xp = 0, int evil = 0);
	~Teacher();
	// Methods
	void info();
};

ostream& operator<<(ostream& os, const Teacher& obj);
