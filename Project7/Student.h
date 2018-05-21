#ifndef _STUDENT_H_
#define _STUDENT_H_
#include "Human.h"

class Student:public Human {
private:
	string group;
	string subject;
	int course;
public:
	Student() = default;
	Student(string name, string sname, int age, string address, string group, string subject) :Human(name, sname, age, address) {
		this->group = group;
		this->subject = subject;
	}
	friend istream& operator >> (istream& is, Student &obj);
	friend ostream& operator << (ostream& os, Student &obj);

};


#endif
