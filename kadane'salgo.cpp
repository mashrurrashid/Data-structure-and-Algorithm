//kadane's algo approach for max sum;

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int currs=0;
    int maxs=INT_MIN;
    for (int i=0;i<n;i++)
    {
        currs+=ar[i];
        if(currs<0){
            currs=0;
        }
        maxs=max(maxs,currs);
    }
    cout<<maxs<<" ";
    
}