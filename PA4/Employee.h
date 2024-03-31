#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
    protected:
        string name;
        double wage;
        double hours;

    public:
        Employee(string theName, double theWage, double theHours);
        double calcPay() const;
        string getName() const;
};

#endif
