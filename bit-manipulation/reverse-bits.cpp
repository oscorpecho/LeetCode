class Solution {
public:
    int reverseBits(int n) {
        string arr="";
        for(int i=0;i<32;i++){
        int bits=n%2;
        arr.push_back(bits+'0');
        n=n/2; 
        }
        int s=0;
        int j=31;
        for(int i=0;i<arr.size();i++){
            s+=(arr[i]-'0')*(1<<j);
            j--;
        }
        return s;
    }
};