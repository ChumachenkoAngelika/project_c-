#include "Schedule.h"

bool Schedule::addClass(Subject* subject, DayOfWeek day, const TimeSlot& time, const std::string& classroom) {
    schedule[day].emplace_back(subject, time, classroom);
    classrooms.push_back(classroom);
    return true;
}

bool Schedule::updateSchedule(const ScheduleChange& change) {
    // В реальности — логика обновления
    return true;
}
