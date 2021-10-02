//Calculating sum of N natural Number

#include <iostream>
using namespace std;

int main()
{
  int num, sum;
  
  cout << "Enter the natural num to find sum: ";
  cin >> num;
  //Calculating the sum using mathematical formula
  sum = (num * (num + 1)) / 2;
  
  cout << "Sum of: " << num << " Natural number is " << sum << endl;
  return 0;
}
  
  
