
#include "Nurse.h"
#include <iostream>

void Nurse::displayDetails()const
{
    HospitalMember::displayDetails();
     cout << "Experience Years: " << experienceYears << endl<<"Shift: " << shift <<  endl;
}

void Nurse::displayType() const {
    cout << "\nType: Nurse";
}
