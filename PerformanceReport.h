#ifndef PERFORMANCEREPORT_H
#define PERFORMANCEREPORT_H

#include <map>
#include <string>
#include "Grade.h"

struct PerformanceReport {
    std::map<std::string, std::vector<Grade>> studentGrades; // имя студента → оценки
    double averageScore;
    PerformanceReport() : averageScore(0.0) {}
};

#endif