//Works only when the array is already sorted
#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int largestdist(vector <int> poslist ,int n ,int ncows)
{
  sort(poslist.begin(),poslist.end());
<<<<<<< HEAD:C++/Things_that_were_wrong/Binary_search_aggrcow_experiment.cpp
  int low=poslist[0],high=poslist[n-1],cow=1,left=0,best=0,gap;
  while(low<=high)
  {
    gap=(low+high-1)/2;
    for(int i=1;i<=n && cow<ncows;i++)
=======
  int low=poslist.front(),high=poslist.back(),gap=(low+high)/2;
  int cow=1,left=0,i=1;
  while(low<=high)
  {
    for(;i<=n && cow<=ncows; i++)
>>>>>>> 71dcf774abb38f5a813c478c916e2c83190a390f:C++/Things_that_were_wrong/Binary_sort_experimentation.cpp
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
<<<<<<< HEAD:C++/Things_that_were_wrong/Binary_search_aggrcow_experiment.cpp
    if(cow>=ncows)
    {
        best=cow;
        low = gap+1;

    }
    else
    {
        high = gap-1;
    }
=======
    gap=low+high/2;
>>>>>>> 71dcf774abb38f5a813c478c916e2c83190a390f:C++/Things_that_were_wrong/Binary_sort_experimentation.cpp
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
