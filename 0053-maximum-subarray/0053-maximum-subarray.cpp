class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
        long long mx=INT_MIN,s=0;
        for(int i=0;i<n;i++)
        {s+=arr[i];
        mx=max(mx,s);
        if(s<0)s=0;
        }
        return mx;
    }
};