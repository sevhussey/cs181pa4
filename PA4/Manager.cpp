#include <string>
#include <cstdlib>

using namespace std;

#include "Employee.h"
#include "Manager.h"

Manager::Manager(string theName, double theWage, double theHours, double theBonus):Employee(theName, theWage, theHours)
{
    bonus = theBonus;
}

double Manager::calcPay()
{
    return Employee::calcPay() + bonus;
}
