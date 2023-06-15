class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums)
     {
        int i,num,j;
        int n=nums.size();
        set<int> s;
        for(i=0;i<n;i++)
        {
           num=nums[i];
           for(j=2;j*j<=num;j++)
           {
             while(num%j==0)
             {
                 s.insert(j);
                 num=num/j;
             }
           }
           if(num>1)
           {
               s.insert(num);
           }
        }
        return s.size();
     }
};
