//Memoize and map approach
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int coins(vector <int> & memo ,int n)
{
  if(n<12)
  {
    memo[n]=n;
    return memo[n];
  }
  else
  {
    memo[n]=max(n,coins(memo,n/2) + coins(memo,n/3) + coins(memo,n/4));
    return memo[n];
  }
}

int main()
{
  int input,output,trial;
  cout<<endl<<"Enter the number of trials : ";
  cin>>trial;
  while(trial--)
    {
      cout<<endl<<"Enter the bytelandian coin for : ";
      cin>>input;
      output=coins(input);
      cout<<endl<<"The exchanged bytelandian coin is : "<<output;
    }
  return 0;
}
