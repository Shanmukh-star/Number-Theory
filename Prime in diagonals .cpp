#define ll long long int
class Solution {
public:
 bool is_prime(ll n)
        {
            ll req=0;
           if(n==1||n==4||n==6)
           {
               return false;
           }
           else if(n==2||n==3||n==5)
           {
               return true;
           }
           else
           {
               for(ll i=2;i*i<=n;i++)
               {
                   if(n%i==0)
                   {
                       req++;
                   }
               }
               if(req==0) return true;
               else return false;
           }
        }
    int diagonalPrime(vector<vector<int>>& nums) {
        ll maxi=0;
        ll s=nums.size();
        for(ll i=0;i<nums.size();i++)
        {
            if(is_prime(nums[i][i])&&nums[i][i]>maxi)
            {
                maxi=nums[i][i];
            }
            if(is_prime(nums[i][s-1-i])&&nums[i][s-i-1]>maxi)
            {
                maxi=nums[i][s-i-1];
            }
        }
         return maxi; //takes care even if no prime as it returns 0 as per asked.
    }
};
