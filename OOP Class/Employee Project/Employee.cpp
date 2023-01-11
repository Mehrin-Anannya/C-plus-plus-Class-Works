#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee employee;
    cout << "Enter your Employee Name:"<<endl;
    cin>> employee.employeeName;
    cin >> employee.salary;
    employee.display();
    return 0;
}
