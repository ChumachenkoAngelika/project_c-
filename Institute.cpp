#include "Institute.h"

MinistryReport Institute::submitMinistryReport(int year) {
    std::string content = "Годовой отчет института " + name + " за " + std::to_string(year) + " год";
    return MinistryReport(name, content, year);
}