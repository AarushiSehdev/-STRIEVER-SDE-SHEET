class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n=a.size();
        int sum=0;
        int maxo=a[0];
        for(int i=0;i<n;i++)
        {
           sum+=a[i];
            maxo=max(maxo,sum);
            if(sum<0)
                sum=0;
        }
        return maxo;
    }
};