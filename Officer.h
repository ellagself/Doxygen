/**
 * @file Officer.h
 * @author Ella Self
 * @date 2024-12-03
 * @brief officer header file
 * 
 * officer class definition 
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness;
 public:
  void print();
  double calculatePay();
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
