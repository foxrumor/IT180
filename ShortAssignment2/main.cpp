#include <string>
#include <iostream>
#include "header.h"
using namespace std;

static void printProfile(Student s, Address a, Contact c);

int main(){
    Student rishi("rsaripa");
    Address address("Information Tech", 5150, "103", "Normal", "IL", "USA");
    Contact contact("sishi.saripalle@ilstu.edu", "309-438-3520", "911");
    rishi.name = "Rishi Saripalle";
    printProfile(rishi, address, contact);
    return 0;
}

static void printProfile(Student s, Address a, Contact c){
    s.display();
    a.display();
    c.display();
};