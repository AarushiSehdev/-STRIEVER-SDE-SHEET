class Solution {
public:
    #include <bits/stdc++.h> 

int firstocc(vector<int>nums,int target)
    {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=n;
        int first=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {   
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<target)
            {   
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;
    }

    int lastocc(vector<int>nums,int target)
    {
        
        int n=nums.size();
        int low=0;
        int high=n-1;
        int last=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {   
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return last;
    }
   
    vector<int> searchRange(vector<int>& nums, int target) {
        
         int lb=firstocc(nums,target);
      if(lb==-1) return {-1,-1};
      return{lb,lastocc(nums,target)};



    }
};