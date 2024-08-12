
#include "Doctor.h"
#include <iostream>
using namespace std;

void Doctor::displayDetails() const 
{
    HospitalMember::displayDetails();
     cout << "Specialization: " << specialization << "\nAvailability: " << availability <<  endl;
}
void Doctor::displayType() const
{
    cout << "\nType: Doctor";
}