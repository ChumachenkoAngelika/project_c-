#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <vector>
#include "Subject.h"
#include "Assignment.h"
#include "Grade.h"

class Subject;
class Assignment;

class Teacher {
private:
    std::string fullName;
    std::string position;
    std::vector<Subject*> subjects;

public:
    Teacher(const std::string& name, const std::string& pos) : fullName(name), position(pos) {}
    ~Teacher() {
        for (auto s : subjects) delete s;
    }

    Assignment* createAssignment(Subject* subject, const std::string& description, const Date& deadline);
    Grade gradeWork(Assignment* assignment, Student* student, int score);
    void addSubject(Subject* subject) { subjects.push_back(subject); }
    std::string getFullName() const { return fullName; }
    std::string getPosition() const { return position; }
};

#endif