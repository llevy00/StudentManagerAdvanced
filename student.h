#include <iostream>
#ifndef _STUDENT_H_
#define _STUDENT_H_

using namespace std;

class student
{
    private:
            string firstName;
            string lastName;
            double grade = 0;
            double score;
    public:
            void setName(string& a, string& b);
            string fullName();
            void addGrade(double& a);
            double getScore();
};

#endif
