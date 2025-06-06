#ifndef FACULTY_H
#define FACULTY_H

#include <string>
#include <vector>
#include "Group.h"
#include "Curriculum.h"
#include "FacultyReport.h"

class Group;
class Curriculum;

class Faculty {
private:
    std::string name;
    std::vector<Group*> groups;
    std::vector<Curriculum*> curricula;

public:
    Faculty(const std::string& n) : name(n) {}
    ~Faculty() {
        for (auto g : groups) delete g;
        for (auto c : curricula) delete c;
    }
    bool approveCurriculum(Curriculum* curriculum) { curricula.push_back(curriculum); return true; }
    FacultyReport generateReport(const DateRange& range);
    void addGroup(Group* group) { groups.push_back(group); }
    std::string getName() const { return name; }
    const std::vector<Group*>& getGroups() const { return groups; }
};

#endif