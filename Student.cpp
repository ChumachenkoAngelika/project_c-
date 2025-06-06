#include "Student.h"
#include "Assignment.h"

bool Student::submitWork(Assignment* assignment) {
    Work work("Выполненная работа", Date(1, 1, 2023));
    return assignment->submit(this, work);
}

void Student::addGrade(Subject* subject, const Grade& grade) {
    // В данном случае, в системе не привязано к предмету
    grades[subject].push_back(grade);
}
