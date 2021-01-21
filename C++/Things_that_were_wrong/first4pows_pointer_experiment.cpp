#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int unitsdigit(int base,int expo)
{
  if(base)
  {
    if(base%10)
    {
      if(exp%4)
      {
        int initval=1,expres=exp%4;
        while(expres >= 1)
        {
          initval *= base;
          initval %= 10;
        }
        return initval;
      }
      else
      {
        int initval=1,expres=4;
        while(expres >= 1)
        {
          initval *= base;
          initval %= 10;
        }
        return initval;
      }

      }
    }
  }
}
