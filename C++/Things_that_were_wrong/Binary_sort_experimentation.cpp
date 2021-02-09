//Works only when the array is already sorted
#include<iostream>
#include<vector>
using namespace std;
int Binsearch(vector <int> a,int n, int key)
{
  int low=0,high=n-1,mid;
  while(low<=high)
  {
      mid=(low+high)/2;
      if(key==a[mid])
      {
        return mid;
      }
      else
      {
        if(key<a[mid])
        {
          high=mid-1;
        }
        else if(key>a[mid])
        {
          low=mid+1;
        }
      }
  }
  if(low>high)
  {
    return -1;
  }
}
int main()
{
  vector <int> input;
  int length,key,in,output;
  cout<<endl<<"Enter the digits in ascending order(only postive integers) : "<<endl;
  cin>>in;
  while(in != -1)
  {
    input.push_back(in);
    cin>>in;
  }
  for(int i=0;i<input.size();i++)
  {
    cout<<input[i]<<" ";
  }
  cout<<"Enter the search term : ";
  cin>>key;
  output=Binsearch(input,input.size(),key);
  if(output != -1)
  {
    cout<<endl<<"The number was found at "<<output;
  }
  else
  {
    cout<<endl<<"The number was not found";
  }

  return 0;
}
//An experiment for Binary sorted
//I also have to learn graph theory
