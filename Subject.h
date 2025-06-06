#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>
#include <vector>
#include "Assignment.h"
#include "SubjectType.h"
#include "Date.h"

class Assignment;

class Subject {
private:
    std::string name;
    SubjectType type;
    std::vector<Assignment*> assignments;
    std::vector<Date> exams;

public:
    Subject(const std::string& n, SubjectType t) : name(n), type(t) {}
    ~Subject() {
        for (auto a : assignments) delete a;
    }

    Assignment* addAssignment(const std::string& description, const Date& deadline);
    bool scheduleExam(const Date& examDate);
    void addAssignment(Assignment* assignment) { assignments.push_back(assignment); }

    std::string getName() const { return name; }
    SubjectType getType() const { return type; }
    const std::vector<Assignment*>& getAssignments() const { return assignments; }
    const std::vector<Date>& getExams() const { return exams; }
};

#endif