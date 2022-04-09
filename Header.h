#ifndef HEADER_H
#define HEADER_H

#include <string>
#include <iostream>

using namespace std;

class Student {
private:
	string Name;
	string lastName;
	string group;
public:
	Student();
	~Student();
	void setName(string name);
	void setlastName(string name);
	void setGroup(string name);
	string getName() const;
	string getlastName() const;
	string getGroup() const;
	friend ostream& operator<<(ostream&, const Student&);
	friend istream& operator>>(istream&, Student&);
	Student& operator=(const Student&);
};
#endif