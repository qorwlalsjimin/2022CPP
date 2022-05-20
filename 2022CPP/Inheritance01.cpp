#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string sName;
	int nAge;

public:
	Person();
	Person(string name, int age);
	void hi();
}; //class

void Person:: hi() {
	cout << "이름 : " << sName << " ,나이:" << nAge << endl;
}

Person::Person() {
	sName = "익명";
	nAge = 0;
}

Person::Person(string name, int age)
	:sName(name), nAge(age) { } 

class Student : public Person {
public:
	int nHakbun;
	Student();
	Student(string name, int age, int hakbun);
	void study();
};

Student::Student() { 
	nHakbun = 0;
}
Student::Student(string name, int age, int hakbun)
	:Person(name, age), nHakbun(hakbun) {}

void Student::study() {
	hi();
	cout << "학번 : " << nHakbun << endl;
}

int main() {

	Person jimin = Person("BJM", 17);
	Person jimin2 = Person();
	jimin.hi();
	jimin2.hi();

	Person* jimin3 = new Person("NBJ",19);
	jimin3->hi();

	Person* people = new Person[5];
	people[0].hi();
	delete jimin3;
	delete[] people;

	Student seo = Student("배서연", 14, 2103);

	return 0;
}