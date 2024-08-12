
#include "HospitalMember.h"

class Nurse : public HospitalMember
{
private:
    int experienceYears;
     string shift;

public:
    Nurse(const  string& id, const  string& nm, int ag, const  string& gen,
        int expYears, const  string& shft)
        : HospitalMember(id, nm, ag, gen), experienceYears(expYears), shift(shft) {}

    void displayDetails()const override;
    void displayType() const;
};



