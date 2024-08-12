
#include "HospitalMember.h"

class Hospital
{
private:
    HospitalMember** members;
    int memberCount;
    int capacity;

    void resize();

public:
    Hospital();
    ~Hospital();

    void addMember(HospitalMember* member);
    void removeMember(const  string& memberID);
    void displayAllMembers() const;
    HospitalMember* findMemberById(const  string& memberID) const;
    void sortMembersByName();
    void sortMembersByAge();
    void recommendDoctors(const  string& specialization) const;
    HospitalMember* searchMemberByName(const  string& name) const;
    HospitalMember* searchMemberByGender(const  string& gender) const;
};


