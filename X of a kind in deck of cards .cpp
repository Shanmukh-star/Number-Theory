#define pub push_back
#define ll long long int
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        set<int> s;
        vector<int> v;
        vector<int> v2;
        int a,req,n;
        for(auto i :deck)
        {
            s.insert(i);
        }
        for(auto i : s)
        {
            v.pub(i);
        }
        n=s.size();
        for(auto i : v)
        {
            a=count(deck.begin(),deck.end(),i);
            v2.pub(a);
        }
        if(s.size()==1)
        {
            if(deck.size()==1)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        else if(s.size()==2)
        {
            if(__gcd(v2[0],v2[1])==1)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        else
        {
            req=__gcd(v2[0],v2[1]);
            for(int i=2;i<n;i++)
            {
               req=__gcd(req,v2[i]);
               if(req==1)
               {
                   break;
               }
            }
            if(req==1) return false;
            else return true;
        }
    }
    
};
