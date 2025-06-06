#ifndef WORK_H
#define WORK_H

#include "Date.h"
#include <string>

struct Work {
    std::string content;
    Date submissionDate;
    Work(const std::string& c, const Date& d) : content(c), submissionDate(d) {}
};

#endif
