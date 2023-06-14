class Solution {
public:
    int commonFactors(int a, int b) {
        int g=gcd(a,b);
        int i;
        if(g==1) return 1;
        else if(g==2||g==3) return 2;
        else
        {
           int req=0;
            for(i=1;i*i<=g;i++)
            {
                if(g%i==0)
                {
                    req++;
                }
            }
            if((i-1)*(i-1)==g) return 2*req-1;
            else return 2*req;
        }
    }
};
