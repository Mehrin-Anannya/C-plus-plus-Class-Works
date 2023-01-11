#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
    int employeeId;
public:
    string employeeName;
    float salary;
    string employeeDepartment;

    int getSalary(){
      return this->salary;
    }

    float getIncrementedSalary(int increment){
       return this->salary + increment;
    }

    void display(){
        cout<< "Employee Name:"
        <<this->employeeName<<endl;
        cout<<this->getSalary()<<endl;
        cout<<this->getIncrementedSalary(10)<<endl;
    }

};
