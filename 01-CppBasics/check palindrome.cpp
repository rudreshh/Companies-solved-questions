#include <iostream>
using namespace std;

int main()
{
  int x;
  cout<<"Enter any number:";
  cin>>x;
  int temp=x,r,sum=0;
  
  while(x!=0)
  {
    r=x%10;
    sum=(sum*10)+r;
    x=x/10;
  }
  
  if(temp==sum)
  cout<<"Yes it is a palindrome";
  else
  cout<<"No it is not a plaindrome";
  
  return 0;
}

