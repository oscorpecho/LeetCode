class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string,vector<pair<string,int>>>mp;
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        string ans="";
        int low=0;
        int high=mp[key].size()-1;
        int mid=0;
        while(low<=high){
            mid=(low+high)/2;
            if(mp[key][mid].second<=timestamp){
                ans=mp[key][mid].first;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};
