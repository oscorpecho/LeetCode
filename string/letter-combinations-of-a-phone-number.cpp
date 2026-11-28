class Solution {
public:
vector<string>res;
void backtrack(int start,string& digits,string path){
    if(start==digits.size()){
        res.push_back(path);
        return;    
    }
    unordered_map<char,string>mp{
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
    };
    char c=digits[start];
    string letters=mp[c];
    for(int i=0;i<letters.size();i++){
        path.push_back(letters[i]);
        backtrack(start+1,digits,path);
        path.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        string path;
        backtrack(0,digits,path);
        return res;
    }
};