class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char>st;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                else if(st.contains(board[i][j])){
                    return false;
                }
                else{
                    st.insert(board[i][j]);
                }
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<char>st;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.'){
                    continue;
                }
                else if(st.contains(board[j][i])){
                    return false;
                }
                else{
                    st.insert(board[j][i]);
                }
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                unordered_set<char>st;
                for(int row=i;row<i+3;row++){
                    for(int col=j;col<j+3;col++){
                        if(board[row][col]=='.'){
                            continue;
                        }
                 else if(st.contains(board[row][col])){
                    return false;
                }
                else{
                    st.insert(board[row][col]);
                }
                    }
                }
            }
        }
        return true;
    }
};