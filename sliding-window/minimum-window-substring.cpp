class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        int minlen=INT_MAX;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        int l=0;
        int start=0;
        int count=t.size();
        for(int r=0;r<s.size();r++){
            if(mp[s[r]]>0){
                count--;
            }
            mp[s[r]]--;
            while(count==0){
                int len=r-l+1;
                if(len<minlen){
                    minlen=len;
                    start=l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0){
                    count++;
                }
                l++;
            }
        }
        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(start,minlen);
    }
};