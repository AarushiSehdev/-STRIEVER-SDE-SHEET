class Solution {
public:
    
    int calcmax(vector<int>& piles)
    {
        int maxi=-1;
        for(int i=0;i<piles.size();i++)
        {
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    
    
    int calch(vector<int>& piles,int hour)
    {
        int total_hours=0;
        int n=piles.size();
        for(int i=0;i<n;i++)
        {
            total_hours+=ceil((double) piles[i]/(double) hour);
        }
        return total_hours;
        
    }
  


    int minEatingSpeed(vector<int>& piles, int h) {
         int low=1;
        int high=calcmax(piles);

    
        while(low<high)
        {
            int mid=(low+high)/2;
            int th=calch(piles,mid);
            if(th<=h)
            {
                
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
}
};