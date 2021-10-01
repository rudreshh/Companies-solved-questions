/* Compound Assignment
Applying an operation to an object and then storing the result back into the object

simple & compound assignment operator -> 

x = x + 1 ;            ->    x += 1;
y = y - 1 ;            ->    y -= 1;
z = z + x ;            ->    z += x;
p = p * item;          ->    p *= item;
n = n * (x + 1);       ->    n *= (x+1);
Total = Total / (x+y)  ->    Total /= (x+y);
hours = hours;         ->    hours %= 13;

*/
#include <iostream>
using namespace std;

int main()
{
    int sum = 10, x = 5;
    sum += x;
    cout << sum << endl;
  
    int fact = 10, y = 5;
    fact *= y;
    cout << fact << endl;
    
    return 0;
}
