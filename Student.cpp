#include "Student.h"
#include "Assignment.h"

bool Student::submitWork(Assignment* assignment) {
    Work work("Выполненная работа", Date(1, 1, 2023));
    return assignment->submit(this, work);
}

void Student::addGrade(Subject* subject, const Grade& grade) {
    
    grades[subject].push_back(grade);
}
