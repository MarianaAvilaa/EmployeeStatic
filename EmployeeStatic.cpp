//
// Created by studentloaner on 5/17/2022.
//
#include <iostream>

#include "EmployeeStatic.h"
using namespace std;

int EmployeeStatic::count=0;
int EmployeeStatic::getCount() {
    return count;
}

EmployeeStatic::EmployeeStatic(const string &first, const string &last)
:firstName(first),lastName(last){
    ++count;
    cout<<"Employee constructor for"<<firstName<<' '<<lastName<<"called."<<endl;
}

EmployeeStatic::~EmployeeStatic(){
    cout<<"`EmplyeeStatic() called for"<<firstName<<' '<<lastName<<endl;
    --count;
}
string EmployeeStatic::getFirstName() const {
    return firstName;
}
string EmployeeStatic::getLastName() const {
    return lastName;
}