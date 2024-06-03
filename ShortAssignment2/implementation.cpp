#include <iostream>
#include <string>
#include "header.h"
using namespace std;

//address functions

Address::Address(){
    streetName = "";
    aptNo = "";
    city = "";
    state = "";
    country = "";
    houseNo = 0;
};

Address::Address(string sn, int hn, string an, string ct, string st, string cou){
    streetName = sn;
    aptNo = an;
    city = ct;
    state = st;
    country = cou;
    houseNo = hn; 
};

void Address::display(){
    cout << houseNo << " " << streetName << endl;
    if(!aptNo.empty()){
        cout << "Apt #: " << aptNo << endl;
    }
    cout << city << ", " << state << endl;
    cout << country << endl;
};

//contact functions

Contact::Contact(string e, string cp, string ep){
    email = e;
    cellPhone = cp;
};

void Contact::display(){
    cout << "Email: " << email << ", Cell Phone: " + cellPhone << endl;
};

// student functions
Student::Student(string id){
    studentID = id;
};

void Student::display(){
    cout << name << " - has student id: " << studentID;
}