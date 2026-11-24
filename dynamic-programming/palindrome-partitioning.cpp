class Solution {
public:
vector<vector<string>>res;
bool ispalindrome(string&s,int start,int end){
    while(start<end){
        if(s[start]==s[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}
void backtrack(string& s,int start,vector<string>path){
    if(start==s.size()){
        res.push_back(path);
        return;
    }
    for(int i=start;i<s.size();i++){
        if(ispalindrome(s,start,i)){
            path.push_back(s.substr(start,i-start+1));
            backtrack(s,i+1,path);
            path.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string>path;
        backtrack(s,0,path);
        return res;
    }
};