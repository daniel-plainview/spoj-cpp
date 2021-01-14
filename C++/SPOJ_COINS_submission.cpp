//Using pure recursion
#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll coins(ll n)
{
  if(n < 12)
  {
    return n;
  }
  else
  {
    return max(n,coins(n/2) + coins(n/3) + coins(n/4));
  }
}
int main()
{
  ll in;
  while(cin>>in)
  {
    cout<<coins(in)<<"\n";
  }
  return 0;
}
