#ifndef TIMESLOT_H
#define TIMESLOT_H

struct TimeSlot {
    int startHour, startMinute;
    int endHour, endMinute;
    TimeSlot(int sh, int sm, int eh, int em)
        : startHour(sh), startMinute(sm), endHour(eh), endMinute(em) {}
};

#endif
