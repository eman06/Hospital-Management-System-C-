
#include "HospitalMember.h"

class Patient : public HospitalMember
{
private:
     string disease;
     string admissionDate;

public:
    Patient(const  string& id, const  string& nm, int ag, const  string& gen,
        const  string& dis, const  string& admDate)
        : HospitalMember(id, nm, ag, gen), disease(dis), admissionDate(admDate) {}
    void displayType() const;
    void displayDetails() const override;
};



