#include "Assignment.h"
#include "Student.h"
#include "Teacher.h"

bool Assignment::submit(Student* student, const Work& work) {
    submissions[student] = work;
    return true;
}

Grade Assignment::evaluate(Teacher* teacher, Student* student) {
    // для простоты - автоматическая оценка
    int score = rand() % (maxScore + 1);
    Grade grade(score, "Автоматическая оценка");
    grades[student] = grade;
    // добавляем оценку студенту
    student->addGrade(nullptr, grade); // - в реальности нужно связать предмет
    return grade;
}