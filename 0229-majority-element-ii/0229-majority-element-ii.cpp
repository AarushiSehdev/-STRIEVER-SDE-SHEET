class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        int mini=(int)(n/3)+1;
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]]==mini)
            {
              temp.push_back(nums[i]);
            }
            if(temp.size()==2)
                break;
        }
        return temp;
    }
};