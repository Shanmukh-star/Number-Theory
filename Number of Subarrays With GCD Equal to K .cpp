class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) 
    {
        int req=0,i,j,g;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            g=nums[i];
            for(j=i;j<n;j++)
            {
                if(nums[j]%k!=0) break;
                else
                {
                    g=gcd(nums[j],g);
                    if(g==k) req++;
                }
            }
        }
        return req;
    }
};
