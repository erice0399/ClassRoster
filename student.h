//
//  student.h
//  classRoster
//
//  Created by Eric Evans on 3/15/21.
//

#ifndef student_h
#define student_h
#include <string>
#include "degree.h"
using namespace std;

//class to define students
class Student {
public:
    //The following are mutators
    void SetStudentID(int studentInfo);
    void SetFirstName(string studentInfo);
    void SetLastName(string studentInfo);
    void SetEmailAddress(string studentInfo);
    void SetAge(int studentInfo);
    void SetNumDays0(int studentInfo);
    void SetNumDays1(int studentInfo);
    void SetNumDays2(int studentInfo);
    void SetDegreeProgram(string studentInfo);
    //end mutators
    
    //The following are accessors
    int GetStudentID() const;
    string GetFirstName() const;
    string GetLastName() const;
    string GetEmailAddress() const;
    int GetAge() const;
    int GetNumDays0() const;
    int GetNumDays1() const;
    int GetNumDays2() const;
    string GetDegreeProgram() const;
    //end accessors
    void Print() const;
    Student();
    
private:
    int studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int numDaysArray [3];
    string programDegree;
    DegreeProgram degreeProgram;
};

#endif /* student_h */
