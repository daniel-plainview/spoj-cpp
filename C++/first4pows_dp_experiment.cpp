#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int* first4pow(int base, int index )
{
  int repowers[5];
  repowers[0]=1;
  int base_units=base % 10, multi = 1  ;
  for(int i=1;i<=4;i++)
  {
    multi = base_units * repowers [i-1];
    repowers[i] = multi % 10;
  }
  return *repowers;
}
int main()
{
  int base,expo,trial
  int *output;
  cin>>trial;
  while(trial--)
  {
    cin>>base>>expo;
    output=first4pow(base,expo);
    for(int i=0;i<5;i++)
    {
    cout<<*(output+i)<<endl;
    }
  }
  return 0;
}
