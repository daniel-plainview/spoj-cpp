/* An example of using the map data structure */
#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#include<map>
using namespace std;
map <ll,ll> computer;
ll coins(ll n)
{
  if(n<500000000)
    if(computer.find(n) != computer.end())
    {
      return computer[n];
    }
    else
    {
      computer[n]= max(n,coins(n/2) + coins(n/3) + coins(n/4));
      return computer[n];
    }
  else
  {
    computer[n]= max(n,coins(n/2) + coins(n/3) + coins(n/4));
    return computer[n];
  }
}
int main()
{
  ll n;
  while(cin>>n)
  {
  cout<<coins(n)<<"\n";
  }
  return 0;
}
