#include <iostream>

/*
    create a class Employee
    Decide the data members
    calculate the average salary 
    handle exception is salary of two employees are same

*/

class Employee
{
private:
    /* data */
    int employeeId;
    std::string employeeName;
    std::string employeeSalary;


public:
    Employee()= default;
    Employee(Employee& obj)= default;
    Employee(Employee&& obj)= delete;
    Employee(int id, std::string name, std::string salary)
    :employeeId(id), employeeName(name), employeeSalary(salary){}

    ~Employee() {}
};


