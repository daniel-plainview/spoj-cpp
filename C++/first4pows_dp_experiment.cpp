#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector <int> first4pow(int base)
{
vector <int> repowers(4,0);
if( base % 10  )
  {
    int base_units=base % 10 ,multi ;
    for(int i=0;i<repowers.size();i++)
    {
      if(i != 0)
      {
        multi = base_units * repowers [i-1];
        repowers[i] = multi % 10;
      }
      else
      {
        repowers[i] = 1;
      }
    }
    return repowers;
  }
  else
  {
    return repowers;
  }
}

int main()
{
  vector <int> output(4,0);
  int input;
  cout<<endl<<"Enter the input : ";
  cin>>input;
  output=first4pow(input);
  for(int i=0;i<output.size();i++)
  cout<<output[i]<<endl;
  return 0;
}
