#include<iostream>
using namespace std;
int main()
{
    int n=1,i;
    while(n!=-1)
    {
        cin>>n;
        if(n!=-1)
        {
            int a[n],s=0;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                s=s+a[i];
            }
            if(s%n!=0)
                cout<<"-1"<<endl;
            else
            {
                s=s/n;
                int m=0;
                for(i=0;i<n;i++)
                {
                    if(a[i]<s)
                        m=m+s-a[i];
                }
                cout<<m<<endl;
            }
        }
    }
    return 0;
}
