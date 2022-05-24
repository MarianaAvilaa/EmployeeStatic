#include <iostream>
#include "EmployeeStatic.h"
using namespace std;
int main() {
    cout<<"Number of employees before instantiation of any object is"
    << EmployeeStatic::getCount()<<endl;
    {
        EmployeeStatic e1("Susan","Baker");

        cout<<"Number of Employees after objects are instantiated is"
        <<EmployeeStatic::getCount();
    }
    return 0;
}
