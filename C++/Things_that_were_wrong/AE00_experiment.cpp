#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void primesbefore(int a)
{
  bool prime[a+1];
  memset(prime,true,sizeof(prime));
  for(int i=2; i*i<=a ;i++)
  {

    if(prime[i]==true)
    {
        /*falsify the multiples*/
        for(int j=i*i;j<=a;j+=i)
        {
          prime[j]=false;
        }
    }
  }
  for(int i=0;i<=a;i++)
  {
    if(prime[i])
    {
      cout<<endl<<i;
    }
  }
}

int main()
{
  int input;
  cout<<endl<<"Count the primes upto : ";
  cin>>input;
  primesbefore(input);
  return 0;
}
