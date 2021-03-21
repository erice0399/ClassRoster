//
//  roster.cpp
//  classRoster
//
//  Created by Eric Evans on 3/15/21.
//

#include "roster.h"
#include "student.h"
#include "degree.h"
#include <string>
#include <iostream>
using namespace std;

Student one;
Student two;
Student three;
Student four;
Student five;

Roster::Roster(){
    
}

//void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram){

 void Roster::printAll() const{
     cout << "Print All";
}

void Roster::printInvalidEmails() const{
    cout << "Invalid emails";
}

void Roster::printAverageDaysInCourse() const{
    cout << "Day's in course";
}

void Roster::printByDegreeProgram() const{
    cout << "print by degree program";
}

void Roster::remove(string info){
    cout << "remove " + info;
}
void Roster::add(string info){
    cout << "add";
}




