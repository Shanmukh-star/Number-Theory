class Solution {
public:
int lcm(int l, int a)
{
    return (l*a)/gcd(l,a);
}
    int subarrayLCM(vector<int>& nums, int k) 
    {
        int req=0,i,j;
        int n= nums.size();
        int l;
        for(i=0;i<n;i++)
        {
            l=nums[i];
            for(j=i;j<n;j++)
            {
                if(k%nums[j]!=0) break;
                else
                {
                    l=lcm(l,nums[j]);
                    if(l==k) req++;
                }
            }
        }
        return req;
    }
};
