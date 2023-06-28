class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int currcnt=0;
        int longest=1;
        int last_sm=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]-1==last_sm)
            {
                currcnt+=1;
                last_sm=nums[i];
            }
            else if(last_sm!=nums[i])
            {
                currcnt=1;
                last_sm=nums[i];
            }
            
            longest=max(longest,currcnt);
        }
        if(nums.size()==0)
        {
            longest=0;
        }
        return longest;
    }
};