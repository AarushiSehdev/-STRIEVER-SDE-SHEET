class Solution {
public:
int findmax(vector<int>& nums)
{
    int maxi=nums[0];
    for(int i=0;i<nums.size();i++)
    {
        maxi=max(maxi,nums[i]);
    }
    return maxi;
}
int finddiv(vector<int>& nums,int div,int threshold)
{
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=ceil((double)nums[i]/(double)div);
    }
   return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int callmax=findmax(nums);
        int high=callmax;
        int ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(finddiv(nums,mid,threshold)<=threshold)
            {
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;

        }
        return ans;
    }
};