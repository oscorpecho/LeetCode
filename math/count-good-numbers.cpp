class Solution {
public:
int MOD=1000000007;
int power(long long base,long long exp){
    if(exp==0){
        return 1;
    }
    long long half=power(base,exp/2);
    if(exp%2==0){
        half=(half*half)%MOD;
    }
    else{
        half=(half*half*base)%MOD;
    }
    return half;
}
    int countGoodNumbers(long long n) {
        if(n%2==0){
            return (1LL*power(5,n/2)*power(4,n/2))%MOD;
        }
        else{
            return (1LL*power(5,(n/2)+1)*power(4,n/2))%MOD;
        }
    }
};