#include "Curriculum.h"

bool Curriculum::addSubject(Subject* subject, int credits) {
    subjects.emplace_back(subject, credits);
    return true;
}

bool Curriculum::approveChanges(Teacher* teacher) {
    // В реальности — проверка прав
    return true;
}
