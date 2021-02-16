#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int binsearch(vector <int> a,int key)
{
  sort(a.begin(),a.end());
  cout<<endl<<"The sorted array is : ";
  for(int i=0;i<a.size();i++)
  {
    cout<<a[i]<<" ";
  }
  int low=0,high=a.size()-1,mid;
  while(low<=high)
  {
    mid=low+high/2;
    {
      if(a[mid]==key)
      {
        return mid;
      }
      else if(a[mid]<key)
      {
        low=a[mid]+1;
      }
      else
      {
        high=mid-1;
      }
    }
  }
}
int main()
{
  vector <int> invec;
  int input,key;
  cout<<endl<<"Enter the array to be searched ";
  cin>>input;
  while(input != -1)
  {
    invec.push_back(input);
    cin>>input;
  }
  cout<<endl<<"Enter the number to be searched : ";
  cin>>key;
  cout<<endl<<binsearch(invec,key);
  return 0;
}
