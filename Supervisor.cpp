/**
 * @file Supervisor.cpp
 * @author Ella Self
 * @date 2024-12-03
 * @brief supervisor functions 
 * 
 * supervisor functions for employee project
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;


/**
 * supervisor constructor 
 *
 * @pre 
 * @post supervised is set to -1
 * 
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}


/**
 * supervisor pointer
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param int numSupervised 
 * @pre variables exist
 * @post reads number of supervised
 * 
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}


/**
 * supervisor print
 *
 * @pre numSupervised exists
 * @return void 
 * @post prints the number supervised 
 * 
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}


/**
 * supervisor pay
 *
 * @pre calculatePay function exists in Employee
 * @return double 
 * @post supervisor pay is calculated 
 * 
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
