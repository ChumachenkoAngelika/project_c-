#ifndef DATERANGE_H
#define DATERANGE_H

#include "Date.h"

struct DateRange {
    Date start;
    Date end;
    DateRange(const Date& s, const Date& e) : start(s), end(e) {}
};

#endif
