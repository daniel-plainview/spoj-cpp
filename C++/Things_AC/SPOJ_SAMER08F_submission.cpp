#include<iostream>
using namespace std;
int num_squares(int n)
{ int count=0;
  for(int i=1;i<=n;i++)
  {
    count+=(i*i);
  }
  return count;
}

int main()
{
  int squares;
  int input;
  cin>>input;
  while(input!=0)
  {
    squares=num_squares(input);
    cout<<squares<<endl;
    cin>>input;
  }
  return 0;
}
