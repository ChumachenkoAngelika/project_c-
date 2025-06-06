#ifndef CURRICULUM_H
#define CURRICULUM_H

#include <string>
#include <vector>
#include <utility>
#include "Subject.h"

class Curriculum {
private:
    std::string academicYear;
    int requiredCredits;
    std::vector<std::pair<Subject*, int>> subjects;

public:
    Curriculum(const std::string& year, int credits) : academicYear(year), requiredCredits(credits) {}
    bool addSubject(Subject* subject, int credits);
    bool approveChanges(class Teacher* teacher);
    std::string getAcademicYear() const { return academicYear; }
    int getRequiredCredits() const { return requiredCredits; }
    const std::vector<std::pair<Subject*, int>>& getSubjects() const { return subjects; }
};

#endif