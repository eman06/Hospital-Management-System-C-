#include "Hospital.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Patient.h"
#include <iostream>

void displayMenu() {
     cout << "1. Add Member\n"
        << "2. Remove Member\n"
        << "3. Display All Members\n"
        << "4. Search Member by Name\n"
        << "5. Search Member by Gender\n"
        << "6. Sort Members by Name\n"
        << "7. Sort Members by Age\n"
        << "8. Recommend Doctors\n"
        << "9. Exit\n";
}

int main() {
    Hospital hospital;
    int c;

    while (true) {
        displayMenu();
         cin >> c;

        if (c == 1) 
        {
            
            cout << "Enter member type (Doctor/Nurse/Patient): ";
            string type;
            cin >> type;

            string id, name, gender, spec, avail, shift, disease, admDate;
            int age, expYears;

            if (type == "Doctor") {
                cout << "Enter ID, Name, Age, Gender, Specialization, Availability: ";
                cin >> id >> name >> age >> gender >> spec >> avail;
                hospital.addMember(new Doctor(id, name, age, gender, spec, avail));
            }
            else if (type == "Nurse") {
                cout << "Enter ID, Name, Age, Gender, Experience Years, Shift: ";
                cin >> id >> name >> age >> gender >> expYears >> shift;
                hospital.addMember(new Nurse(id, name, age, gender, expYears, shift));
            }
            else if (type == "Patient") {
                cout << "Enter ID, Name, Age, Gender, Disease, Admission Date: ";
                cin >> id >> name >> age >> gender >> disease >> admDate;
                hospital.addMember(new Patient(id, name, age, gender, disease, admDate));
            }
            else {
                cout << "Invalid type.\n";
            }
        }
        else if (c == 2) 
        {
            string id;
            cout << "Enter member ID to remove: ";
            cin >> id;
            hospital.removeMember(id);
        }
        else if (c == 3)
        {
            hospital.displayAllMembers();
        }
        else if (c == 4) {
            // Code to search by name
            string name;
            cout << "Enter name to search: ";
            cin >> name;
            HospitalMember* member = hospital.searchMemberByName(name);
            if (member) {
                member->displayDetails();
            }
            else {
                cout << "Member not found.\n";
            }
        }
        else if (c == 5) {
            // Code to search by gender
            string gender;
            cout << "Enter gender to search: ";
            cin >> gender;
            HospitalMember* member = hospital.searchMemberByGender(gender);
            if (member) {
                member->displayDetails();
            }
            else {
                cout << "Member not found.\n";
            }
        }
        else if (c == 6) {
            // Code to sort by name
            hospital.sortMembersByName();
            cout << "Members sorted by name.\n";
        }
        else if (c == 7) {
            // Code to sort by age
            hospital.sortMembersByAge();
            cout << "Members sorted by age.\n";
        }
        else if (c == 8) {
            // Code to recommend doctors
            string specialization;
            cout << "Enter specialization to recommend doctors: ";
            cin >> specialization;
            hospital.recommendDoctors(specialization);
        }
        else if (c == 9) {
            return 0;
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }

    }
}
