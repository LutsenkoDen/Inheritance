#include<iostream>
#include<string>
using namespace std;

class Humen
{
	string name;
	unsigned int age;
public:
	const string& get_name() const
	{
		return this->name;
	}
	unsigned int get_age() const
	{
		return this->age;
	}
	void set_name(string& name)
	{
		this->name = name;
	}
	void set_age(unsigned int age)
	{
		this->age = age;
	}
	Humen(string name, unsigned int age) : name(name), age(age)
	{
		cout << "HConstructor:\t" << this << endl;
	}
	~Humen()
	{
		cout << "HDestructor:\t" << this << endl;
	}
	// Methods
	void info()
	{
		cout << name << " " << age << " лет" << endl;
	}
};