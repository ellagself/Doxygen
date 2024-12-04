/**
 * @file Employee.cpp
 * @author Ella Self
 * @date 2024-12-03
 * @brief Employees functions 
 * 
 * contains employees functions
 */

#include "Employee.h"
#include <iostream>

using namespace std;


/**
 * employee constructor 
 *
 * @pre 
 * @post id, years, hoursWorked, and hourlyRate set to -1
 * 
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}


/**
 * employee pointers
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @pre id, years, hourlyRate, and hoursWorked exist as variables
 * @post 
 * 
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}


/**
 * print function for employees
 *
 * @pre variables exist
 * @return void 
 * @post employee information is displayed
 * 
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}


/**
 * employee anniversary message
 *
 * @pre 
 * @return void 
 * @post congratulations to employee on anniversary is printed
 * 
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}


/**
 * employee pay calculation
 *
 * @pre hourlyRate and hoursWorked exist
 * @return double 
 * @post employee pay is found
 * 
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

