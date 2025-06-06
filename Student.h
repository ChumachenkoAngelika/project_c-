#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <map>
#include <vector>
#include "Group.h"
#include "Grade.h"
#include "AcademicDebt.h"

class Group;

class Student {
private:
    std::string fullName;
    std::string recordBookNumber;
    std::map<Subject*, std::vector<Grade>> grades;
    std::vector<AcademicDebt*> debts;
    Group* group;

public:
    Student(const std::string& name, const std::string& recordBook)
        : fullName(name), recordBookNumber(recordBook), group(nullptr) {}
    ~Student() {
        for (auto debt : debts) delete debt;
    }

    bool submitWork(class Assignment* assignment);
    std::map<Subject*, std::vector<Grade>> viewGrades() const { return grades; }
    void addGrade(Subject* subject, const Grade& grade);
    void addDebt(AcademicDebt* debt) { debts.push_back(debt); }
    void setGroup(Group* g) { group = g; }

    std::string getFullName() const { return fullName; }
    std::string getRecordBookNumber() const { return recordBookNumber; }
    Group* getGroup() const { return group; }
};

#endif