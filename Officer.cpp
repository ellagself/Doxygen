/**
 * @file Officer.cpp
 * @author Ella Self
 * @date 2024-12-03
 * @brief Officer functions
 * 
 * officer functions for employees project
 */

#include "Officer.h"
#include <iostream>

using namespace std;


/**
 * constructor
 *
 * @pre 
 * @post sets evilness to a default of 500
 * 
 */
Officer::Officer() {
  evilness = 500;
}


/**
 * officer pointer
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param double evilness 
 * @pre evilness exists
 * @post evilness value saved 
 * 
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}


/**
 * print for officer
 *
 * @pre evilness exists
 * @return void 
 * @post officer evilness is displayed and printed
 * 
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}


/**
 * officer pay
 *
 * @pre hourlyRate, evilness, and hoursWorked exist
 * @return double 
 * @post officer pay is calculated
 * 
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
