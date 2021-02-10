#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
//This is one attempt to solve the aggrcows
void printvec(vector <int> v)
{
  cout<<"The list is : ";
  for(int i=0;i<v.size();i++)
  {
    cout<<" "<<v[i];
  }
}
int main()
{
  vector <int> insort;
  int input;
  cin>>input;
  while(input !=-1)
  {
    insort.push_back(input);
    cin>>input;
  }
  printvec(insort);
  sort(insort.begin(),insort.end());
  cout<<endl;
  printvec(insort);
  return 0;
}
