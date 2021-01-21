//multiplying numbers upto m and n in a two dimensional table format
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void mult(int m , int n)
{
  for (int i=0;i<=m;i++)
  {
    cout.width(10);
    cout<<endl;
    for(int j=0;j<=n;j++)
    {
      cout<<i*j<<"|";
    }
    cout<<endl;
    cout<<string(2*n + 1,'~');
  }
}
int main()
{
  int m,n;
  cout<<endl<<"Enter the numbers to be multiplied : ";
  cin>>m>>n;
  mult(m,n);
  return 0;
}
