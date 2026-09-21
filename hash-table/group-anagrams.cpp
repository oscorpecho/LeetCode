class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string key="";
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>res;
        for(int i=0;i<strs.size();i++){
            key=strs[i];
            sort(key.begin(),key.end());
            mp[key].push_back(strs[i]);
        }
        for(auto it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};