class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(char x:s){
            m[x]++;
        }
        vector<pair<int,char>>v;
        for(auto &pr:m){
            char num=pr.first;
            int freq=pr.second;
            v.push_back({freq,num});
        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        string res;
        for(int i=0;i<v.size();i++){
            int freq=v[i].first;
            char ch=v[i].second;
            for(int j=0;j<freq;j++){
                res.push_back(ch);
            }
        }
        return res;
    }
};