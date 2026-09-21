class Solution {
public:
    stack<int>st;
    int evalRPN(vector<string>& tokens) {
        int a,b;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+"&& tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/"){
                st.push(stoi(tokens[i]));
            }
            else if(tokens[i]=="+"){
                a=st.top();st.pop();
                b=st.top();st.pop();
                st.push(a+b);
            }
            else if(tokens[i]=="-"){
                a=st.top();st.pop();
                b=st.top();st.pop();
                st.push(b-a);
            }
            else if(tokens[i]=="*"){
                a=st.top();st.pop();
                b=st.top();st.pop();
                st.push(a*b);
            }
            else if(tokens[i]=="/"){
                a=st.top();st.pop();
                b=st.top();st.pop();
                st.push(b/a);
            }
        }
        return st.top();
    }
};