class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {   
    vector<int> result(2);
    for (int i=0;i<arr.size();i++)
    {
        for (int j=i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==target)
            {   
                result[0]=i;
                result[1]=j;
                //cout<<i<<" "<<j<<endl;
                return result;
            }
            
        }
    }
        return result;
    }
};