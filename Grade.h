#ifndef GRADE_H
#define GRADE_H

#include <string>
struct Grade {
    int value;
    std::string comment;
    Grade(int v = 0, const std::string& c = "") : value(v), comment(c) {}
};

#endif
