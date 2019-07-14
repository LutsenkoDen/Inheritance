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

class Teacher :public Humen
{
	string speciality;
	unsigned int xp;
	int evil; // уровень злости
public:
	const string& get_speciality() const
	{
		return this->speciality;
	}
	unsigned int get_xp() const
	{
		return this->xp;
	}
	int get_evil() const
	{
		return this->evil;
	}
	const string& set_speciality(const string& speciality)
	{
		this->speciality = speciality;
	}
	const unsigned int set_xp(unsigned int xp)
	{
		return this->xp = xp;
	}
	int set_evil(int evil)
	{
		return this->evil = evil;
	}
	// Constructors
	Teacher(const string& name, unsigned int age,
		const string& speciality, unsigned int xp = 0, int evil = 0) :Humen(name, age)
	{
		this->speciality = speciality;
		this->xp = xp;
		this->evil = evil;
		cout << "TConstructor:\t" << this << endl;
	}
	~Teacher()
	{
		cout << "TDestructor:\t" << this << endl;
	}
	// Methods
	void info()
	{
		Humen::info();
		cout << "Специальность: " << speciality << ", опыт преподавания: " << xp << " лет" << ", уровень злости: " << evil << " %" << endl;
	}
};

class Graduate :public Student
{
	string diploma_theme;
public:
	const string& get_diploma_theme() const
	{
		return this->diploma_theme;
	}
	const string& set_diploma_theme(const string& diploma_theme)
	{
		this->diploma_theme = diploma_theme;
	}
	// Constructors
	Graduate
	(const string& name, unsigned int age,
		const string& speciality, unsigned int year, int rating,
		const string& diploma_theme
	) :Student(name, age, speciality, year, rating)
	{
		this->diploma_theme = diploma_theme;
		cout << "GConstructor:\t" << this << endl;
	}
	~Graduate()
	{
		cout << "GDestructor:\t" << this << endl;
	}
	// Methods
	void info()
	{
		Student::info();
		cout << "Тема дипломного проекта: " << diploma_theme << endl;
	}
};

void main()
{
	setlocale(LC_ALL, "Russian");
	Humen h("Василий", 20);
	h.info();
	Student durko("Дурко Василий", 20, "РПО");
	durko.info();
	Teacher pablo("Pablo Escobar", 40, "распространение наркотиков", 25, 50);
	pablo.info();
	Graduate tony("Antonio Montana", 22, "распространение наркотиков", 5, 90, "работа с проблемной задолженностью");
	tony.info();
}