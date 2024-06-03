#ifndef HEADER_H_
#define HEADER_H_

#include <string>
#include <iostream>
using namespace std;
class Address{
private:
    string streetName, aptNo, city, state, country;
    int houseNo;
public:
    Address();
    Address(string, int, string, string, string, string);
    void display();
};

class Contact{
private:
    string email, cellPhone;
public:
    Contact(string, string, string);
    void display();
};

class Student{
private:
    string studentID;
public:
    string name;
    Student(string);
    void display();
};

#endif