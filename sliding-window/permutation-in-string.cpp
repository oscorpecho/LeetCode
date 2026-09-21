class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        if(s1.size()>s2.size()){
            return false;
        }
        for(int i=0;i<s1.size();i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
        if(mp1==mp2){
            return true;
        }
        int l=0;
        int r=s1.size();
        while(r<s2.size()){
            mp2[s2[r]]++;
            mp2[s2[l]]--;
            if(mp2[s2[l]]==0){
                mp2.erase(s2[l]);
            }
            l++;
            r++;
            if(mp1==mp2){
                return true;
            }
        }
        return false;
    }
};