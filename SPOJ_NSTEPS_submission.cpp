#include<iostream>
using namespace std;

int pattern(int x,int y)
{
  if(x==y)
  {
    if(x%2==0)
    {
      return x+y;
    }
    else
    {
      return (x+y-1);
    }
  }
  else if(y==x-2)
  {
    if(x%2==0 && y%2==0 )
    {
      return x+y;
    }
    else if(x%2!=0 && y%2!=0)
    {
      return (x+y-1);
    }
    else
    {
      return -1;
    }
  }
  else
  {
    return -1;
  }
}
int main()
{
  int trials;
  cin>>trials;
  while(trials--)
  {
    int a,b,ret;
    cin>>a>>b;
    ret=pattern(a,b);
    if(ret == -1)
    {
      cout<<"No Number"<<endl;
    }
    else
    {
      cout<<ret<<endl;
    }
  }
  return 0;
}
