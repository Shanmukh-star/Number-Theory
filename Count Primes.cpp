#define ll long long int
class Solution {
public:
    int countPrimes(int n) 
    {
       bool prime[10000000];
       memset(prime,1,sizeof(prime));
       prime[0]=0;
       prime[1]=0;
       for(ll j=2;j*j<=n;j++)
        {
          if(prime[j]==1)
          {
              for(ll i=j*j;i<=n;i+=j)
              {
                  prime[i]=0;
              }
          }
        }
        ll req=0;
        for(ll j=2;j<n;j++)
        {
            if(prime[j]==1) req++;
        }
        return req;
    }
};
