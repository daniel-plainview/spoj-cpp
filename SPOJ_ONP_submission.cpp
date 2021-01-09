/*Accept an expression with not more than 3 variables  and convert it into
RPN notation ((a-b)+c) */
//assume that the expression starts with an open bracket
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void expression(string n)
{
  stack <char> exp;
  for(int i=0;i<n.length();i++)
  {
    if(n[i]>='a' && n[i]<='z')
    {
      cout<<n[i];
    }
    else if (n[i]==')')
    {
        while(exp.top()!='(')
        {
          cout<<exp.top();
          exp.pop();
        }
        exp.pop();
    }
    else
    {
      exp.push(n[i]);
    }
  }
  while(!exp.empty())
  {
    cout<<exp.top();
    exp.pop();
  }
  cout<<endl;
}

int main()
{
  int trial;
  cin>>trial;
  for(int j=-1;j<trial;j++)
  {
    string input;
    getline(cin,input);
    expression(input);
  }
  return 0;
}
