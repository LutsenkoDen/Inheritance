#include"Teacher.h"
const string& Teacher:: get_speciality() const
{
	return this->speciality;
}
unsigned int Teacher::get_xp() const
{
	return this->xp;
}
int Teacher::get_evil() const
{
	return this->evil;
}
const string& Teacher::set_speciality(const string& speciality)
{
	return this->speciality = speciality;
}
const unsigned int Teacher::set_xp(unsigned int xp)
{
	return this->xp = xp;
}
int Teacher::set_evil(int evil)
{
	return this->evil = evil;
}
// Constructors
Teacher::Teacher(const string& name, unsigned int age,
	const string& speciality, unsigned int xp, int evil) :Humen(name, age)
{
	this->speciality = speciality;
	this->xp = xp;
	this->evil = evil;
	cout << "TConstructor:\t" << this << endl;
}
Teacher::~Teacher()
{
#ifdef DEBUG
	cout << "TDestructor:\t" << this << endl;
#endif // DEBUG

}
// Methods
void Teacher::info()
{
	Humen::info();
	cout << "Специальность: " << speciality << ", опыт преподавания: " << xp << " лет" << ", уровень злости: " << evil << " %" << endl;
}

ostream& operator<<(ostream& os, const Teacher& obj)
{
	os << (Humen)obj;
	return os << "Специальность: " << obj.get_speciality() << ", опыт преподавания: " << obj.get_xp() << " лет" << ", уровень злости: " << obj.get_evil() << " %" << endl;
}