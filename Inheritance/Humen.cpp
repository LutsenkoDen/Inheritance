#include"Humen.h"

const string& Humen::get_name() const
{
	return this->name;
}
unsigned int Humen::get_age() const
{
	return this->age;
}
void Humen::set_name(string& name)
{
	this->name = name;
}
void Humen::set_age(unsigned int age)
{
	this->age = age;
}
Humen::Humen(string name, unsigned int age) : name(name), age(age)
{
	cout << "HConstructor:\t" << this << endl;
}
Humen::~Humen()
{
#ifdef DEBUG
	cout << "HDestructor:\t" << this << endl;
#endif // DEBUG

}
// Methods
void Humen::info()
{
	cout << name << " " << age << " лет" << endl;
}

ostream& operator<<(ostream& os, const Humen& obj)
{
	return os << obj.get_name() << " " << obj.get_age() << " лет. ";
}