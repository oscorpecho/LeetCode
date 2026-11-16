class Solution {
public:
vector<string>res;
void backtrack(int open,int close,string& path,int n){
    if(open<n){
        path.push_back('(');
        backtrack(open+1,close,path,n);
        path.pop_back();
    }
    if(close<open){
        path.push_back(')');
        backtrack(open,close+1,path,n);
        path.pop_back();
    }
    if(open==n&&close==n){
        res.push_back(path);
    }
}
    vector<string> generateParenthesis(int n) {
        string path="";
        backtrack(0,0,path,n);
        return res;
    }
};