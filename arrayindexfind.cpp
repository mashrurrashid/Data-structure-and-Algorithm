//maximum sum in a circular array;

#include <bits/stdc++.h>

using namespace std;
bool ps(int arr[], int n, int k)
{
    for(int i=0;i<n;i++)
    {
        for (int j=1+i;j<n;j++)
        {
            if(arr[i]+arr[j] == k)
            {   cout<<i<<" "<<j<<endl;;
                return true;
            }
        }
    }
    return false;
}
    int main()
{
    int arr[]={2,4,6,7,11,14,16,20,21};
    int k=31;
    cout<<ps(arr,8,k);
    
}