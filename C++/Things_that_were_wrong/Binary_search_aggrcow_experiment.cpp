//Works only when the array is already sorted
#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int largestdist(vector <int> poslist ,int n ,int ncows)
{
  sort(poslist.begin(),poslist.end());
  int low=poslist[0],high=poslist[n-1],cow=1,left=0,best=0,gap;
  while(low<=high)
  {
    gap=(low+high-1)/2;
    for(int i=1;i<=n && cow<ncows;i++)
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
    if(cow>=ncows)
    {
        best=cow;
        low = gap+1;

    }
    else
    {
        high = gap-1;
    }
  }
  return i;
}

int main()
{
  int trials;
  cin>>trials;
  cout<<endl;
  while(trials--)
  {
    int nstalls,c,input,largest_dist;
    vector <int> stalls(nstalls);
    cin>>nstalls>>c;
    cout<<endl;
    for(int i=0;i<nstalls;i++)
    {
      cin>>input;
      stalls.push_back(input);
      cout<<endl;
    }
    largest_dist=largestdist(stalls,nstalls,c);
    cout<<endl<<largest_dist;
  }
  return 0;
}
