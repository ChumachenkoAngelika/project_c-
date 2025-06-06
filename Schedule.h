#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <string>
#include <vector>
#include <tuple>
#include <map>
#include "Subject.h"
#include "TimeSlot.h"
#include "DayOfWeek.h"
#include "ScheduleChange.h"

class Schedule {
private:
    std::string semester;
    std::vector<std::string> classrooms;
    std::map<DayOfWeek, std::vector<std::tuple<Subject*, TimeSlot, std::string>>> schedule;

public:
    Schedule(const std::string& sem) : semester(sem) {}
    bool addClass(Subject* subject, DayOfWeek day, const TimeSlot& time, const std::string& classroom);
    bool updateSchedule(const ScheduleChange& change);
    std::string getSemester() const { return semester; }
    const auto& getSchedule() const { return schedule; }
};

#endif