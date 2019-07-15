#include"Student.h"

const string& Student::get_speciality() const
{
	return this->speciality;
}
unsigned int Student::get_year() const
{
	return this->year;
}
int Student::get_rating()const
{
	return this->rating;
}
const string& Student::set_speciality(const string& speciality)
{
	return this->speciality = speciality;
}
const unsigned int Student::set_year(unsigned int year)
{
	return this->year = year;
}
int Student::set_rating(int rating)
{
	return this->rating = rating;
}
// Constructors
Student::Student
(const string& name, unsigned int age,
	const string& speciality, unsigned int year, int rating) :Humen(name, age)
{
	this->speciality = speciality;
	this->year = year;
	this->rating = rating;
	cout << "SConstructor:\t" << this << endl;
}
Student:: ~Student()
{
#ifdef DEBUG
	cout << "SDestructor:\t" << this << endl;
#endif // DEBUG

}
// Methods
void Student::info()
{
	Humen::info();
	cout << "Специальность: " << speciality << ", " << year << "-й курс, успеваемость: " << rating << endl;
}

ostream& operator<<(ostream& os, const Student& obj)
{
	os << (Humen)obj;
	return os << "Специальность: " << obj.get_speciality() << ", " << obj.get_year() << "-й курс, успеваемость: " << obj.get_rating() << endl;
}