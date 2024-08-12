
#include "HospitalMember.h"

class Doctor : public HospitalMember 
{
private:
     string specialization;
     string availability;

public:
    void displayType() const;
    Doctor(const  string& id, const  string& nm, int ag, const  string& gen,
        const  string& spec, const  string& avail)
        : HospitalMember(id, nm, ag, gen), specialization(spec), availability(avail) {}

    void displayDetails() const override;
    string getspecialization()
    {
        return specialization;
    }
};


