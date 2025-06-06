#ifndef GROUP_H
#define GROUP_H

#include <string>
#include <vector>
#include "Student.h"
#include "PerformanceReport.h"

class Group {
private:
    std::string groupCode;       // Уникальный код группы
    std::string curator;         // ФИО куратора
    std::vector<Student*> students; // Список указателей на студентов в группе

public:
    // Конструктор
    Group(std::string code, std::string cur);

    // Метод добавления студента в группу
    bool addStudent(Student* student);

    // Метод генерации отчета об успеваемости
    PerformanceReport getPerformanceReport();

    // Геттеры
    std::string getGroupCode() const;
    std::string getCurator() const;
};

#endif // GROUP_H