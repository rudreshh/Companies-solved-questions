/*
Write a program to calculate Net Salary Program should take following as input:
1. Basic Salary
2. Percentage of Allowances
3. Percentage of Deductions
*/

#include <iostream>
using namespace std;

int main()
{
  float basic, percentAllow, percentDeduct, netSalary;
  cout << "Enter Basic Salary: ";
  cin >> basic;
  cout << "Enter percent allowance : ";
  cin >> percentAllow;
  cout << "Enter percent of deduction: ";
  cin>> percentDeduct;
  
  netSalary = basic + basic * percentAllow / 100 - basic * percentDeduct /100;
  cout << "Net salary is: " << netSalary << endl;
  
  return 0;
}
  
  
