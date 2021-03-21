//
//  roster.h
//  classRoster
//
//  Created by Eric Evans on 3/15/21.
//

#ifndef roster_h
#define roster_h
#include "degree.h"
#include "student.h"
#include <string>
#include <iostream>
using namespace std;

class Roster {
public:
    void printAll() const;
    void printInvalidEmails() const;
    void printAverageDaysInCourse() const;
    void printByDegreeProgram() const;
    
    void remove(string info);
    void add(string info);
    Roster();
    Student *classRosterArray[5] = { nullptr, nullptr, nullptr, nullptr, nullptr };
};

#endif /* roster_h */
