//
// Created by studentloaner on 5/17/2022.
//

#include <string>
using namespace std;

class EmployeeStatic {
public:
    EmployeeStatic(const string &, const string &);
    ~EmployeeStatic();
    string getFirstName() const;
    string getLastName() const;
    static int getCount();

private:
    string firstName;
    string lastName;
    static int count;
};



