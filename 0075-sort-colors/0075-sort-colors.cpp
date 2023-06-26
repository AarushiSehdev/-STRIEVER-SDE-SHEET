class Solution {
public:
    void sortColors(vector<int>& a) {
         int n=a.size();
        int ct0=0;
        int ct1=0;
        int ct2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
                ct0++;
            if(a[i]==1)
                ct1++;
            if(a[i]==2)
                ct2++;
        }
        int i=0;
        while(i<ct0)
        {
            a[i]=0;
            i++;
        }
        while(i<ct0+ct1)
        {
            a[i]=1;
            i++;
        }
        while(i<ct0+ct1+ct2)
        {
            a[i]=2;
            i++;
        }
    }
};