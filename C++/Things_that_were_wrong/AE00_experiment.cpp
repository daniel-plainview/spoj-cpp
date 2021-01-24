#include<iostream>
#include<vector>
using namespace std;
int count_factors(int a)
{
  vector <int> lista;
  vector <int> listb;
  if(a==1)
  {
    return 0;
  }
  else
    {
    for(int i=1;i*i<=a;i++)
    {
      if(a%i==0)
      {
        lista.push_back(i);
        listb.push_back(a/i);
      }
    }
    int count=0;
    for(int i=0;i<lista.size();i++)
    {
      if(lista[i]==listb[i])
      {
        count+=1;
      }
      else
      {
        count+=2;
      }
    }
    return count;
  }
}
int main()
{
  int input;
  cin>>input;
  cout<<endl<<count_factors(input*input);
  return 0;
}
