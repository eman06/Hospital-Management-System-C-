
#include "Patient.h"
#include <iostream>

void Patient::displayDetails() const
{
    HospitalMember::displayDetails();
     cout << "Disease: " << disease << endl<<"Admission Date: " << admissionDate <<  endl;
}

void Patient::displayType() const {
    cout << "\nType: Patient";
}