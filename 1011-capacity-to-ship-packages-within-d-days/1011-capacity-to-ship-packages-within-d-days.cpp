class Solution {
public:
    int finddays(vector<int>& weights,int mid)
    {
        int days=1;
        int load=0;
        for(int i=0;i<weights.size();i++)
        {
            if(weights[i]+load>mid)
            {
                days+=1;
                load=weights[i];
            }
            else
                load+=weights[i];
    
        }
        return days;
    }
    
 
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
        }
        int low=*max_element(weights.begin(),weights.end());
        int high=sum;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int no_of_days=finddays(weights,mid);
            if(no_of_days<=days)
            {
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return low;
    }
    
};