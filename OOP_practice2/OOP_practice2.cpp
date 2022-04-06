#include <iostream>

using namespace std;

//Task 1

class Person {
public:
	string m_name;
	int m_age;
	string m_sex;
	int m_weight;

	Person(string name = "", int age = 0, string sex ="", int weight = 0)
		: m_name(name), m_age(age), m_sex(sex), m_weight(weight) {
		void setName(string m_name);
		void setAge(int m_age);
		void setSex(string m_sex);
		void setWeight(int m_weight);
	}
	
	~Person() {}
};

class Student : public Person {
public:
	int m_year;

	Student(const string& name, int age, const string& sex, int weight, int year) : Person(m_name, m_age, m_sex, m_weight), m_year(year) { ++m_year; }

	~Student() {}

};


int main()
{



	return 0;
}