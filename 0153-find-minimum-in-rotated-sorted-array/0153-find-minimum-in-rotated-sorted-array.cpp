class Solution {
public:
    int findMin(vector<int>& a) {
        int low=0;
        int high=a.size()-1;
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[low]<=a[mid])
            {
                ans=min(ans,a[low]);
                low=mid+1;
            }
            else
            {
                ans=min(ans,a[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
};