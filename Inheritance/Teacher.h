#include<iostream>
#include<string>
using namespace std;

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
