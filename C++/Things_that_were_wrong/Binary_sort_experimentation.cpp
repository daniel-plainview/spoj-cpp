//Works only when the array is already sorted
#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int largestdist(vector <int> poslist ,int n ,int ncows)
{
  sort(poslist.begin(),poslist.end());
  int low=poslist.front() , high=poslist.back(),best;
  while(low<=high)
  {
    int gap=(low+high)/2,cow = 1,left=0;
    for(int i=1; i<=n && cow<ncows;i++)
    {
      if(poslist[left]-poslist[i] >= gap)
      {
        cow++;
        left=i;
      }
    }
    if(cow < ncows)
    {
      high=gap-1;
    }
    else
    {
      low=gap+1;
    }
    best = gap;
  }
  return best;
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
