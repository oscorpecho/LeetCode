class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char,int>mp;
        vector<char>unique_vowels;
        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                if(mp[c]==0){
                    unique_vowels.push_back(c);
                }
                mp[c]++;
            }
        }
     sort(unique_vowels.begin(),unique_vowels.end(),[&](char a,char b){
                return mp[a]>mp[b];
            });
            string vowels="";
            for(char c:unique_vowels){
                int count=mp[c];
                for(int i=0;i<count;i++){
                    vowels.push_back(c);
                }
            }
            int j=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    s[i]=vowels[j];
                    j++;
                }
            }
            return s;
    }
};