#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
long long int coin(vector <long long int> &vec, long long int n)
{
  if(n<=12)
  {
    vec[n]=n;
    return vec[n];
  }
  else
  {
    if(vec[n]==0)
    {
      vec[n]=coin(vec,n/2)+ coin(vec,n/3) + coin(vec,n/4);
      return max(n,vec[n]);
    }
  }
  vec[n]=coin(vec,n/2)+ coin(vec,n/3) + coin(vec,n/4);
  return max(n,vec[n]);
}

int main()
{
  vector <long long int> init(100000000,0);
  long long int in,trial,out;
  cout<<endl<<"Enter the number of trials : ";
  cin>>trial;
  while(trial--)
  {
    cout<<endl<<"Enter the number to convert : ";
    cin>>in;
    out=coin(init,in);
    cout<<endl<<"The number of bytelandian coins : "<<out;
  }
  return 0;
}
