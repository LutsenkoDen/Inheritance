#include"Graduate.h"
const string& Graduate::get_diploma_theme() const
{
	return this->diploma_theme;
}
const string& Graduate::set_diploma_theme(const string& diploma_theme)
{
	return this->diploma_theme = diploma_theme;
}
// Constructors
Graduate::Graduate
(const string& name, unsigned int age,
	const string& speciality, unsigned int year, int rating,
	const string& diploma_theme
) :Student(name, age, speciality, year, rating)
{
	this->diploma_theme = diploma_theme;
	cout << "GConstructor:\t" << this << endl;
}
Graduate::~Graduate()
{
#ifdef DEBUG
	cout << "GDestructor:\t" << this << endl;
#endif // DEBUG

}
// Methods
void Graduate::info()
{
	Student::info();
	cout << "Тема дипломного проекта: " << diploma_theme << endl;
}
ostream& operator<<(ostream& os, const Graduate& obj)
{
	os << (Student)obj << "\nТема дипломного проекта: ";
	return os << obj.get_diploma_theme() << endl;
}