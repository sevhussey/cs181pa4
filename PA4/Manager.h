#ifndef MANAGER_H
#define EMPLOYEE_H

#include "Employee.h"

class Manager: public Employee
{
    protected:
        double bonus;
    public:
        Manager(string theName = "", double theWage = 0, double theHours = 0, double theBonus = 0);
        double calcPay();
};

#endif
