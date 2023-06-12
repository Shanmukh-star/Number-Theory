class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        set<string> v;
        vector<string> v1;
        string s;
        int i,j;
        if(n>=2)
        {
           for(j=1;j<n;j++)
           {
               for(i=j+1;i<=n;i++)
               {
                  s=to_string(j/gcd(j,i))+"/"+to_string(i/gcd(j,i));
                  v.insert(s);
               }
           }
           for(auto i:v)
           {
               v1.push_back(i);
           }
        }
        return v1;
    }
};
