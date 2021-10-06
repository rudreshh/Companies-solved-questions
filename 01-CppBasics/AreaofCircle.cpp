#include <bits/stdc++.h>
using namespace std;
#define pi 3.14159 // using #define to set the value of pi
int main(void)
{
    float radius, area;

    cout << "Enter Radius: ";
    cin >> radius;
    area = pi * pow(radius,2);   // using inbuilt function to find square

    cout << "Area is " << area;

    return 0;
}
