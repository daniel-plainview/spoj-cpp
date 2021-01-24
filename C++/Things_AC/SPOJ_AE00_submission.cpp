#include<iostream>
using namespace std;
int count_factors(int a)
{
  int numrec=0;
  for(int j=1;j<=a;j++)
  {
    int count=0;
    for(int i=1;i*i<=j;i++)
    {
      if(j%i==0)
      count++;
    }
    numrec+=count;
  }
return numrec;
}
int main()
{
  int input;
  cin>>input;
  cout<<endl<<count_factors(input);
  return 0;
}
