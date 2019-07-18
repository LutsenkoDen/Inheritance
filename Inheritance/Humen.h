#pragma once
#include<iostream>
#include<string>
using namespace std;

class Humen
{
protected:
	string name;
	unsigned int age;
public:
	const string& get_name()const;
	unsigned int get_age() const;
	void set_name(string& name);
	void set_age(unsigned int age);
	Humen(string name, unsigned int age);
	~Humen();
	// Methods
	
virtual void info();
};
ostream& operator<<(ostream& os, const Humen& obj);