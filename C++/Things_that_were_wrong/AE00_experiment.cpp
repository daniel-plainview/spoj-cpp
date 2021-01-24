#include<iostream>
#include<vector>
int primefactors(int a)
{
  int count=0;
  for(int i=2;i*i<=2;i++)
  {
    if(a%i)
    {
      count+=0;
    }
    else
    { int f2=a/i;
      if(f2==i)
      {
        count+=1;
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
  cout<<endl<<"Enter the number of squares : ";
  cin>>input;
  cout<<endl<<primefactors(input*input);
  return 0;
}
