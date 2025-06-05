#include <iostream>
#include <cstdlib>
#include <ctime>

#include "include/Factory.h"
#include "include/Date.h"
#include "include/TimeSlot.h"
#include "include/Grade.h"
#include "include/Work.h"
#include "include/PerformanceReport.h"
#include "include/DateRange.h"
#include "include/DayOfWeek.h"
#include "include/Subject.h"
#include "include/Student.h"
#include "include/Teacher.h"
#include "include/Institute.h"
#include "include/Faculty.h"
#include "include/Curriculum.h"
#include "include/Assignment.h"
#include "include/Group.h"
#include "include/Schedule.h"
#include "include/AcademicDebt.h"

int main() {
    srand(time(nullptr));

    // Создаем фабрику
    SimpleFactory factory;

    // Создаем институт
    Institute institute("Институт компьютерных наук", "Иванов И.И.");

    // Создаем факультет
    Faculty* faculty = new Faculty("Факультет программной инженерии");
    institute.addFaculty(faculty);

    // Создаем преподавателя
    Teacher* teacher = new Teacher("Петров П.П.", "Доцент");
    // Создаем учебный план
    Curriculum* curriculum = new Curriculum("2023-2024", 180);
    faculty->approveCurriculum(curriculum);

    // Создаем предметы
    Subject* programming = factory.createSubject("Программирование", SubjectType::LECTURE);
    Subject* algorithms = factory.createSubject("Алгоритмы", SubjectType::PRACTICE);
    curriculum->addSubject(programming, 5);
    curriculum->addSubject(algorithms, 4);

    // Создаем группу
    Group* group = new Group("ПИ-101", "Сидоров С.С.");
    faculty->addGroup(group);

    // Создаем студентов
    Student* student1 = new Student("Иванов И.И.", "12345");
    Student* student2 = new Student("Петрова А.А.", "12346");
    group->addStudent(student1);
    group->addStudent(student2);
    student1->setGroup(group);
    student2->setGroup(group);

    // Создаем задание
    Assignment* labWork = teacher->createAssignment(programming, "Лабораторная работа 1", Date(15,10,2023));
    // Студент сдает работу
    student1->submitWork(labWork);
    // Оценка работы
    Grade grade = teacher->gradeWork(labWork, student1, 95);

    // Генерация отчетов
    PerformanceReport report = group->getPerformanceReport();
    DateRange range(Date(1,9,2023), Date(31,12,2023));
    FacultyReport facultyReport = faculty->generateReport(range);
    MinistryReport ministryReport = institute.submitMinistryReport(2023);

    // Вывод
    std::cout << "Институт: " << institute.getName() << std::endl;
    std::cout << "Факультет: " << faculty->getName() << std::endl;
    std::cout << "Группа: " << group->getGroupCode() << std::endl;
    std::cout << "Студент: " << student1->getFullName() << " получил оценку: " << grade.value << std::endl;
    std::cout << "Средний балл группы: " << report.averageScore << std::endl;

    // Очистка
    delete teacher;
    delete curriculum;
    delete programming;
    delete algorithms;
    delete group;
    delete student1;
    delete student2;

    return 0;
}