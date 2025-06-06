#include "Teacher.h"
#include "Assignment.h"
#include "Student.h"
#include "Subject.h"

Assignment* Teacher::createAssignment(Subject* subject, const std::string& description, const Date& deadline) {
    Assignment* assignment = new Assignment(description, deadline, 100);
    subject->addAssignment(assignment);
    return assignment;
}

Grade Teacher::gradeWork(Assignment* assignment, Student* student, int score) {
    Grade grade(score, "Оценено преподавателем " + fullName);
    assignment->evaluate(this, student);
    student->addGrade(nullptr, grade);
    return grade;
}