class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        if(s.size()<t.size()){
            return "";
        }
        int countfreq=t.size(),minlen=INT_MAX,start=0;
        for(char c:t){
            mp[c]++;
        }
        int l=0,r=0;
        while(r<s.size()){
            if(mp[s[r]]>0){
                countfreq--;
            }
            mp[s[r]]--;
        while(countfreq==0){
            if(r-l+1<minlen){
                start=l;
                minlen=r-l+1;
            }
            mp[s[l]]++;
            if(mp[s[l]]>0){
                countfreq++;
            }
            l++;
        }
        r++;
        }
        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(start,minlen);
    }
};