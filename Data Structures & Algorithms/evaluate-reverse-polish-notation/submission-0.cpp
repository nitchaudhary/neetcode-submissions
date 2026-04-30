class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int>ans;
        int n=tokens.size();
        stack<int>st;

        for(string token:tokens){
        if(token=='+' || token== '-'|| token=='*' || token=='/'){
        int b=st.top();st.pop();
        int a=st.top();st.pop();

        if(token=='+')int result=a+b;
        if(token=='+')int result=a+b;
        
        }
        else{
           st.push(tokens);
        }
        
    }
};
