#include<iostream>
#include<vector>
using namespace std;
int count_factors(int a)
{
  int count=0;
  for(int i=1;i*i<=a;i++)
  {
    if(a%i==0)
    {
      if(i*i==a)
      {
        count+=0;
      }
      else
      {
        count+=2;
      }
    }
  }
return count;
}

int main()
{
  int input;
  cin>>input;
  cout<<endl<<count_factors(input*input);
  return 0;
}
