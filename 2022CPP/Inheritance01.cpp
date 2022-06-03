#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string sName;

protected:
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
private:
	int nHakbun;
public:
	Student();
	Student(string name, int age, int hakbun);
	void study();
//protected:
	//void hi();
};

Student::Student() { 
	nHakbun = 0;
}
Student::Student(string name, int age, int hakbun)
	:Person(name, age), nHakbun(hakbun) {}

void Student::study() {
	hi();
	nAge = 100;
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
	Student stu;
	//stu.nAge = 100; //error
	delete jimin3;
	delete[] people;

	Student seo = Student("배서연", 14, 2103);

	return 0;
}

class CBox {
//protected:
private:
	double width;
public:
	void setWidth(double w);
};

class ChildBox : CBox {

	void setWidth(double w) {
		width = w;
	}
};

//1) 다
//2) 나
//3) 가