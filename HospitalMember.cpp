
#include "HospitalMember.h"
#include <iostream>
using namespace std;
void HospitalMember::displayDetails() const
{
     cout << "ID: " << memberID << "\nName: " << name << "\nAge: " << age << "\nGender: " << gender <<  endl;
     displayType();
     cout << endl;
}
void HospitalMember::displayType() const {}