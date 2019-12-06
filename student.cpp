#include <iostream>
#include "student.h"

string name = "";
double grade = 0;
double score = 0;
int assingments = 0;

void student::setName(string& first, string& last)
{
    name.append(first);
    name.append(" ");
    name.append(last);
}

string student::fullName()
{
    return name;
}

void student::addGrade(double& x)
{
    grade = grade + x;
    assingments++;
}

double student::getScore()
{
    if(grade == 0)
    {
        return grade;
    }
    else
    {
        score = grade/assingments;
        return score;
    }
}
