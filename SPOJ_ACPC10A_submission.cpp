//track these changes
//Lets see how github sees these
//Heylo
#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  double retval;
  cin>>a>>b>>c;
  while(1)
  {
    if(a==0&&b==0&&c==0)
    {
      break;
    }
    if((a+c)==2*b)
    {
      retval=c+(c-b);
      cout<<"AP "<<retval<<endl;
    }
    else
    {
      retval=c*((double)c/b);
      cout<<"GP "<<retval<<endl;
    }
    cin>>a>>b>>c;
  }
  return 0;
}
//The difference
