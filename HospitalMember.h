#ifndef HOSPITAL_MEMBER_H
#define HOSPITAL_MEMBER_H

#include<iostream>
using namespace std;
#include <string>

class HospitalMember 
{
protected:
     string memberID;
     string name;
    int age;
     string gender;

public:
    HospitalMember(const  string& id, const  string& nm, int ag, const  string& gen)
        : memberID(id), name(nm), age(ag), gender(gen) 
    {}

    void displayType() const  ;
    virtual void displayDetails() const = 0; 
    virtual ~HospitalMember() {}
    string getname()
    {
        return name;
    }
    string getmemberID()
    {
        return memberID;
    }
    string getgender()
    {
        return gender;
    }
    int getage()
    {
        return age;
    }
};
#endif
