#include<iostream>
#include<vector>
using namespace std;
//Sorting the vector we shall try insertion sort
vector <int> sort(vector<int> input)
{
  vector <int> a(input);
  for (int i=1;i<a.size();i++)
  {
    int j=i-1,shifter;
    shifter=a[i];
    while(j>=0 && a[j]>shifter)
    {
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=shifter;
  }
  return a;
}

int multivec(vector <int> boys, vector <int> girls)
{
  int mul=0;
  vector <int> b(boys);
  vector <int> g(girls);
  for(int i=0;i<b.size();i++)
  {
    mul+=b[i]*g[i];
  }
  return mul;
}
int main()
{
  int trials;
  cin>>trials;
  while(trials--)
  {
    int ninputs,input,output;
    vector <int> boys;
    vector <int> girls;
    cin>>ninputs;
    for(int i=0;i<ninputs;i++)
    {
      cin>>input;
      boys.push_back(input);
    }
    for(int j=0;j<ninputs;j++)
    {
      cin>>input;
      girls.push_back(input);
    }
    boys=sort(boys);
    girls=sort(girls);
    output=multivec(boys,girls);
    cout<<endl<<output;
  }
}
