//
//  Student.cpp
//  StudentInformationAnalyzer
//
//  Created by Adam Spindler on 1/4/14.
//  Copyright (c) 2014 Adam Spindler. All rights reserved.
//

#include "Student.h"

using namespace std;

Student::Student(string studentInformation)
{
    stringstream studentStream(studentInformation);
    studentStream >> firstName;
    studentStream >> lastName;
    studentStream >> id;
    studentStream >> gpa;
}

string Student::getFirstName()
{
    return firstName;
}

string Student::getLastName()
{
    return lastName;
}

string Student::getName()
{
    return firstName + " " + lastName;
}

int Student::getId()
{
    return id;
}

double Student::getGPA()
{
    return gpa;
}