class Solution {
public:
bool find(vector<vector<char>>& board, string& word, int r,int c,int k){
    if(k==word.length()){
        return true;
    }
    char temp=board[r][c];
    board[r][c]='#';
    if(r>0&&board[r-1][c]==word[k]){
        if(find(board,word,r-1,c,k+1)){
            board[r][c]=temp;
            return true;
        }
    }
    if(r<board.size()-1&&board[r+1][c]==word[k]){
        if(find(board,word,r+1,c,k+1)){
            board[r][c]=temp;
            return true;
        }
    }
    if(c>0&&board[r][c-1]==word[k]){
        if(find(board,word,r,c-1,k+1)){
            board[r][c]=temp;
            return true;
        }
    }
    if(c<board[0].size()-1&&board[r][c+1]==word[k]){
        if(find(board,word,r,c+1,k+1)){
            board[r][c]=temp;
            return true;
        }
    }
    board[r][c]=temp;
    return false;
}
    bool exist(vector<vector<char>>& board, string word) {
        int k=0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if((board[i][j]==word[0])&&find(board,word,i,j,k+1)){
                    return true;
                }
            }
        }
        return false;
    }
};