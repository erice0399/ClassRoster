//
//  main.cpp
//  classRoster
//
//  Created by Eric Evans on 3/15/21.
//

#include <iostream>
#include "student.h"
#include "roster.h"
using namespace std;
//#include "roster.cpp"
//#include "degree.h"

int main(int argc, const char * argv[]) {
    cout << "Scripting and Programming Applications: C867" << endl;
    cout << "C++" << endl;
    cout << "Student ID: 001345397" << endl;
    cout << "Eric Evans" << endl;
    
    Roster classRoster;
    
    classRoster.printAll();

    classRoster.printInvalidEmails();


    //loop through classRosterArray and for each element:

    classRoster.printAverageDaysInCourse(/*current_object's student id*/);


    classRoster.printByDegreeProgram(/*SOFTWARE*/);

    classRoster.remove("A3");

    classRoster.printAll();

    classRoster.remove("A3");

    //expected: the above line should print a message saying such a student with this ID was not found.
    
    
    return 0;
}
