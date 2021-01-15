#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
 int first4pow(int base, int index )
{
  vector <int> repowers(5);
  repowers[0]=1;
  int base_units=base % 10, multi = 1  ;
  for(int i=1;i<=4;i++)
  {
    multi = base_units * repowers [i-1];
    repowers[i] = multi % 10;
  }
  if(base%10)
  {
    if(index%4)
    {
      return repowers[index % 4];
    }
    else
    {
      return repowers[4];
    }
  }
  else
  {
    return 0;
  }
}

int main()
{
  int base,expo,trial,output;
  cin>>trial;
  while(trial--)
  {
    cin>>base>>expo;
    output=first4pow(base,expo);
    cout<<output<<endl;
  }
  return 0;
}
