#ifndef INSTITUTE_H
#define INSTITUTE_H

#include <string>
#include <vector>
#include "Faculty.h"
#include "MinistryReport.h"

class Faculty;

class Institute {
private:
    std::string name;
    std::string director;
    std::vector<Faculty*> faculties;

public:
    Institute(const std::string& n, const std::string& dir) : name(n), director(dir) {}
    ~Institute() {
        for (auto f : faculties) delete f;
    }

    void addFaculty(Faculty* faculty) { faculties.push_back(faculty); }
    std::vector<Faculty*> manageFaculties() const { return faculties; }
    MinistryReport submitMinistryReport(int year);
    std::string getName() const { return name; }
    std::string getDirector() const { return director; }
};

#endif