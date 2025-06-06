#ifndef ACADEMICDEBT_H
#define ACADEMICDEBT_H

#include <string>
#include "Date.h"

class AcademicDebt {
private:
    std::string reason;
    Date dateCreated;

public:
    AcademicDebt(const std::string& r, const Date& d) : reason(r), dateCreated(d) {}
    bool notifyStudent();
    bool blockAccess();
    std::string getReason() const { return reason; }
    Date getDateCreated() const { return dateCreated; }
};

#endif