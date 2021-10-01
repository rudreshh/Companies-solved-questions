#include<iostream>
using namespace std;

int main()
{
  // Variables
  float area, height, base;
  
  // Taking user Input
  cout << " Enter Base & Height Respectively: ";
  cin >> base >> height;
  
  // Calculating Area of Triangle
  area = (base * height) / 2;
  
  // Printing Area to the console
  cout << area << endl;
  
  return 0;
