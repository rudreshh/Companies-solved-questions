#include <stdio.h>
int main()
{
  int x;
  printf("Enter any number:");
  scanf("%d",&x);
  int temp=x,r,sum=0;
  while(x!=0)
  {
    r=x%10;
    sum=(sum*10)+r;
    x=x/10;
  }
  if(temp==sum)
  printf("Yes it is a palindrome");
  else
  printf("No it is not a plaindrome");
  
  return 0;
}

