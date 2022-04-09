#include "HEADER.h"

Student::Student() {
	Name = "unknown";
	lastName = "unknown";
	group = "unknown";
}

Student::~Student() {
}

void Student::setName(string name) {
	this->Name = name;
}

void Student::setlastName(string name) {
	this->lastName = name;
}

void Student::setGroup(string grupa) {
	this->group = grupa;
}

string Student::getName() const {
	return Name;
}

string Student::getlastName() const {
	return lastName;
}

string Student::getGroup() const {
	return group;
}

ostream& operator<<(ostream& out, const Student& s) {
	return out << s.getName() << " " << s.getlastName() << " Group:" << s.getGroup() << "\n";
}

istream& operator>>(istream& in, Student& s) {
	in >> s.Name;
	in >> s.lastName;
	in >> s.group;
	return in;
}

Student& Student::operator=(const Student& right) {
	Name = right.Name;
	lastName = right.lastName;
	group = right.group;
	return *this;
}