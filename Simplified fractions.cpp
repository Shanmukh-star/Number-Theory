class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> v1;
        string s;
        int i,j;
        if(n>=2)
        {
           for(j=1;j<n;j++)
           {
               for(i=j+1;i<=n;i++)
               {
                   if(gcd(i,j)==1)
                   {
                       s=to_string(j)+"/"+to_string(i);
                       v1.push_back(s);
                   }
               }
           }
        }
        return v1;
    }
};
