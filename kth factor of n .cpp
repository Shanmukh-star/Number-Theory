class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
        int i;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
            }
        }
        v.push_back(n);
        if(k>v.size())
        {
            return -1;
        }
        else
        {return v[k-1];}
    }
};
