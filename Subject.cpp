#include "Subject.h"

Assignment* Subject::addAssignment(const std::string& description, const Date& deadline) {
    Assignment* assignment = new Assignment(description, deadline, 100);
    assignments.push_back(assignment);
    return assignment;
}

bool Subject::scheduleExam(const Date& examDate) {
    exams.push_back(examDate);
    return true;
}