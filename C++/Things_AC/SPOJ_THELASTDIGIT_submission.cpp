#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int unitsdigit(int base,int exp)
{
  if(exp==0)
  {
    return 1;
  }
  else if(exp==1)
  {
    if(base%10)
      return base%10;
    else
      return 0;
  }
  else if(base%10)
  {
    if(exp%4)
      return ((base%10) * unitsdigit(base,(exp%4)-1)) % 10 ;
    else
      return ((base%10) * unitsdigit(base,3)) % 10 ;
  }
  else
  {
    return 0;
  }
}
int main()
{
  int trials,base,exponent;
  cin>>trials;
  while(trials--)
  {
    cin>>base>>exponent;
    cout<<endl<<unitsdigit(base,exponent);
  }
  return 0;
}
