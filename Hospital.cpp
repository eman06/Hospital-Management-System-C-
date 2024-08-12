
#include "Hospital.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Patient.h"
#include <iostream>

using namespace std;

//members are composed in hospital
//doctor,nurse,patients are inherited from members



void customSwap(HospitalMember*& a, HospitalMember*& b) 
{
    HospitalMember* temp = a;
    a = b;
    b = temp;
}


Hospital::Hospital() : members(nullptr), memberCount(0), capacity(0)
{}

Hospital::~Hospital() 
{
    for (int i = 0; i < memberCount; i++) 
    {
        delete members[i];
    }
    delete[] members;
}

void Hospital::resize()
{
    int newCapacity = capacity == 0 ? 1 : capacity * 2;
    HospitalMember** newMembers = new HospitalMember * [newCapacity];
    for (int i = 0; i < memberCount; i++)
    {
        newMembers[i] = members[i];
    }
    delete[] members;
    members = newMembers;
    capacity = newCapacity;
}

void Hospital::addMember(HospitalMember* member)
{
    if (memberCount == capacity) 
    {
        resize();
    }
    members[memberCount++] = member;
}

void Hospital::removeMember(const  string& memberID)
{
    for (int i = 0; i < memberCount; i++)
    {
        if (members[i]->getmemberID() == memberID) 
        {
            delete members[i];
            for (int j = i; j < memberCount - 1; j++)
            {
                members[j] = members[j + 1];
            }
            --memberCount;
            return;
        }
    }
     cout << "Member not found." <<  endl;
}

void Hospital::displayAllMembers() const
{
    for (int i = 0; i < memberCount; i++)
    {
        members[i]->displayDetails();
         cout <<  endl;
    }
}

HospitalMember* Hospital::findMemberById(const  string& memberID) const
{
    for (int i = 0; i < memberCount; i++)
    {
        if (members[i]->getmemberID() == memberID)
        {
            return members[i];
        }
    }
    return nullptr;
}

void Hospital::sortMembersByName()
{
    for (int i = 0; i < memberCount - 1; i++)
    {
        for (int j = i + 1; j < memberCount; j++)
        {
           
            if (members[i]->getname().compare(members[j]->getname()) > 0)
            {
                customSwap(members[i], members[j]);
            }
        }
    }
}

void Hospital::sortMembersByAge()
{
    for (int i = 0; i < memberCount - 1; i++) 
    {
        for (int j = i + 1; j < memberCount; j++) 
        {
            if (members[i]->getage() > members[j]->getage())
            {
                customSwap(members[i], members[j]);
            }
        }
    }
}

void Hospital::recommendDoctors(const  string& specialization) const 
{
    for (int i = 0; i < memberCount; ++i)
    {
        Doctor* doctor = dynamic_cast<Doctor*>(members[i]);
        if (doctor && doctor->getspecialization() == specialization)
        {
            doctor->displayDetails();
             cout <<  endl;
        }
    }
}

HospitalMember* Hospital::searchMemberByName(const  string& name) const
{
    for (int i = 0; i < memberCount; i++) 
    {
        if (members[i]->getname() == name)
        {
            return members[i];
        }
    }
    return nullptr;
}

HospitalMember* Hospital::searchMemberByGender(const  string& gender) const 
{
    for (int i = 0; i < memberCount; ++i)
    {
        if (members[i]->getgender() == gender) 
        {
            return members[i];
        }
    }
    return nullptr;
}
