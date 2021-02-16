//Works only when the array is already sorted
#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int largestdist(vector <int> poslist ,int n ,int ncows)
{
  sort(poslist.begin(),poslist.end());
  int low=poslist.front(),high=poslist.back(),gap=(low+high)/2;
  int cow=1,left=0,i=1;
  while(low<=high)
  {
    for(;i<=n && cow<=ncows; i++)
    {
      if(poslist[i]-poslist[left] >= gap)
      {
        int temp;
        cow++;
        temp=i;
        i=left+1;
        left=temp;
        if(poslist[i] + gap > poslist.back())
        {
          high=gap;
        }
      }
    }
    gap=low+high/2;
  }
  return i;
}

int main()
{
  int trials;
  cout<<"Enter the number of trials : ";
  cin>>trials;
  while(trials--)
  {
    int nstalls,c,input,largest_dist;
    cout<<"Enter the number of stalls and cows : ";
    cin>>nstalls>>c;
    vector <int> stalls(nstalls);
    for(int i=0;i<nstalls;i++)
    {
      cout<<"Enter the stall number : ";
      cin>>input;
      stalls.push_back(input);
    }
    largest_dist=largestdist(stalls,nstalls,c);
    cout<<"The distance max dist is : "<<largest_dist;
  }
}
