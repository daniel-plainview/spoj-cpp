//Big facrorial
#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a[200],i=0,n,m=0,rem,flag;
    cin>>n;
    flag=n;
    while(flag)
    {
      rem=flag%10;
      a[i]=rem;
      flag/=10;
      m++;
      i++;
    }
    for(i=2;i<n;i++)
    {
      int carry=0,x=0,index;
      for(index=0;index<m;index++)
      {
        x=a[index]*i + carry;
        a[index]=x%10;
        carry=x/10;
      }
      while(carry)
      {
        a[index]=carry%10;
        carry/=10;
        index++;
        m++;
      }
    }
    for(int j=m-1;j>=0;j--)
    {
      cout<<a[j];
    }
    cout<<"\n";
  }
  return 0;
}
