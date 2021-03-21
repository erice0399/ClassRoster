//
//  student.cpp
//  classRoster
//
//  Created by Eric Evans on 3/15/21.
//

#include "student.h"
#include <string>
#include <iostream>
using namespace std;

//this is my constructor
Student::Student() { //default
    studentID = 0;
    firstName = "NA";
    lastName = "NA";
    emailAddress = "na@na.com";
    age = 0;
    numDaysArray[0] = 0;
    numDaysArray[1] = 0;
    numDaysArray[2] = 0;
    programDegree = "NA";
    
}//end constructor

//accessors
int  Student::GetStudentID() const {
   return studentID;
}

string  Student::GetFirstName() const {
   return firstName;
}

string  Student::GetLastName() const {
   return lastName;
}

string  Student::GetEmailAddress() const {
   return emailAddress;
}

int Student::GetNumDays0() const{
    return numDaysArray[0];
}
int Student::GetNumDays1() const{
    return numDaysArray[1];
}
int Student::GetNumDays2() const{
    return numDaysArray[2];
}

int Student::GetAge() const{
    return age;
}

string Student::GetDegreeProgram() const{
    return programDegree;
}
//end assesors
//mutators
void  Student::SetStudentID(int studentInfo){
    studentID = studentInfo;
}

void  Student::SetFirstName(string studentInfo){
    firstName = studentInfo;
}

void  Student::SetLastName(string studentInfo){
    lastName = studentInfo;
}

void  Student::SetEmailAddress(string studentInfo){
    emailAddress = studentInfo;
}

void  Student::SetAge(int studentInfo){
    age = studentInfo;
}

void Student::SetNumDays0(int studentInfo){
    numDaysArray[0] = studentInfo;
    }
void Student::SetNumDays1(int studentInfo){
    numDaysArray[1] = studentInfo;
    }
void Student::SetNumDays2(int studentInfo){
    numDaysArray[2] = studentInfo;
    }


void Student::SetDegreeProgram(string studentInfo){
    if(studentInfo == "SEC"){
        degreeProgram = SECURITY;
        programDegree = "Security";
    }
    else if(studentInfo == "SOF"){
        degreeProgram = SOFTWARE;
        programDegree = "Software";
    }
    else if(studentInfo == "NET"){
        degreeProgram = NETWORK;
        programDegree = "Network";
    }
    else{
        programDegree = "Not Applicable";
    }
}

//endMutators

//this is a print function for student info
void Student::Print() const {
    cout << "Name: "  << GetStudentID() << endl;
    cout << "Last Name: "  << GetFirstName() << " " << GetLastName() << endl;
    cout << "Email Address: " << GetEmailAddress() << endl;
    cout << "Age: "  << GetAge()  << endl;
    cout << "Num Days per course: " << GetNumDays0() << ", " << GetNumDays1() << ", " << GetNumDays2() << endl;
    cout << "Degree Program is: " << GetDegreeProgram() << endl;
   return;
}
    
