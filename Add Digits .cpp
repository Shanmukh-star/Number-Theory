#define ll long long int
class Solution {
public:
    int addDigits(int num) {
        ll req=0;
        ll dup;
        while(num>0)
        {
           req=req+(num%10);
           num=num/10;
        }
        ll hola;
        while(req/10>0)
        {
            hola=0;
            dup=req;
            while(dup>0)
            {
                hola=hola+(dup%10);
                dup=dup/10;
            }
            req=hola;
        }
        return req;
    }
};
