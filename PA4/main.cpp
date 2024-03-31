//Author:           Severin Hussey
//BannerID:         001393626
//Course:           CS 181
//Assignment:       PA4
//Date Assigned:    Monday, March 18, 2024
//Date/Time Due:    Saturday, March 30, 2024 -- 11:55 pm

//Description:      This program will exercise Object-Oriented
//                  concepts with C++.

//Certification of Authenticity:
//          I certify that this assignment is entirely my own work.

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

#include "Employee.cpp"
#include "Manager.cpp"

main()
{
    int count;
    array<string, 100> names;
    array<double, 100> wages;
    array<double, 100> hourS;
    array<double, 100> bonuses;

    cout << "Number of managers: ";
    cin >> count;
    cout << endl;

    cin.ignore();

    for(int i = 0; i < count; i++)
    {
        cout << "Manager " << i << " name: ";
        getline(cin, names[i]);

        cout << "Manager " << i << " hourly wage: ";
        cin >> wages[i];

        cout << "Manager " << i << " hours worked: ";
        cin >> hourS[i];

        cout << "Manager " << i << " bonus: ";
        cin >> bonuses[i];
        cout << endl;
        cin.ignore();
    };

    Manager manStaff[100];

    for(int i = 0; i < count; i++) //making an array of managers
    {
        Manager man(names[i],wages[i],hourS[i],bonuses[i]);
        manStaff[i] = man;
    };

    int j = 0;
    double sum = 0;

    for(int i = 0; i < count; i++) //output pay info
    {
        if(manStaff[i].calcPay() > manStaff[j].calcPay())
            j = i;
        sum += manStaff[i].calcPay();
    };

    cout << fixed << setprecision(2);

    int avg;
    avg = sum/count;

    cout << "Highest paid manager is " << manStaff[j].getName()
         << ", who is paid $" << manStaff[j].calcPay() << endl;
    cout << "Average pay is $" << avg;
}
