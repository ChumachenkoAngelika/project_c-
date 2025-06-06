#include "Faculty.h"
#include "DateRange.h"

FacultyReport Faculty::generateReport(const DateRange& range) {
    std::string content = "Отчет факультета " + name + " за период с " +
        std::to_string(range.start.day) + "." + std::to_string(range.start.month) + "." + std::to_string(range.start.year) +
        " по " +
        std::to_string(range.end.day) + "." + std::to_string(range.end.month) + "." + std::to_string(range.end.year);
    return FacultyReport(name, content, range.end);
}