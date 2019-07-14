#include<iostream>
#include<string>
using namespace std;

class Student :public Humen
{
	string speciality;
	unsigned int year; // год обучения
	int rating;        // успеваемость
public:
	const string& get_speciality() const
	{
		return this->speciality;
	}
	unsigned int get_year() const
	{
		return this->year;
	}
	int get_rating()const
	{
		return this->rating;
	}
	const string& set_speciality(const string& speciality)
	{
		this->speciality = speciality;
	}
	const unsigned int set_year(unsigned int year)
	{
		return this->year = year;
	}
	int set_rating(int rating)
	{
		return this->rating = rating;
	}
	// Constructors
	Student(const string& name, unsigned int age,
		const string& speciality, unsigned int year = 1, int rating = 0) :Humen(name, age)
	{
		this->speciality = speciality;
		this->year = year;
		this->rating = rating;
		cout << "SConstructor:\t" << this << endl;
	}
	~Student()
	{
		cout << "SDestructor:\t" << this << endl;
	}
	// Methods
	void info()
	{
		Humen::info();
		cout << "Специальность: " << speciality << ", " << year << "-й курс, успеваемость: " << rating << endl;
	}
};
