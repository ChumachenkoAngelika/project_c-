#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <string>
#include "Date.h"
#include "Student.h"

class Student;

class Assignment {
private:
    std::string description;
    Date deadline;
    int maxScore;
    std::map<Student*, Work> submissions;
    std::map<Student*, Grade> grades;

public:
    Assignment(const std::string& desc, const Date& dl, int max)
        : description(desc), deadline(dl), maxScore(max) {}

    bool submit(Student* student, const Work& work);
    Grade evaluate(class Teacher* teacher, Student* student);
    std::string getDescription() const { return description; }
    Date getDeadline() const { return deadline; }
    int getMaxScore() const { return maxScore; }
    const std::map<Student*, Work>& getSubmissions() const { return submissions; }
    const std::map<Student*, Grade>& getGrades() const { return grades; }
};

#endif
