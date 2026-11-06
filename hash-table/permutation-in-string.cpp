class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        int l=0;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0;i<s1.size();i++){
            mp1[s1[i]]++;
        }
        for(int r=0;r<s2.size();r++){
            mp2[s2[r]]++;
            if((r-l+1)==k){
                if(mp1==mp2){
                    return true;
                }
                else{
                    mp2[s2[l]]--;
                    if(mp2[s2[l]]==0){
                        mp2.erase(s2[l]);
                    }
                    l++;
                }
            }
        }
        return false;
    }
};