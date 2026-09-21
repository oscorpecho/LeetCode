class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int l=0;
        int maxlen=0;
        for(int r=0;r<s.size();r++){
            while(st.contains(s[r])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxlen=max(maxlen,r-l+1);
        }
        return maxlen;
    }
};