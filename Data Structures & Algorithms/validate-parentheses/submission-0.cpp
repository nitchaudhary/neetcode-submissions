class Solution {
public:
    bool isValid(string s) {
        string st="";
        for(char ch : s){
            
            if(ch== '(' || ch== '[' || ch== '{'){
                st.push_back(ch);
            }
            else if(ch== ')' || ch== ']' || ch== '}') {
                
                if(st.empty()){
                  return false;  
                }
                
                if((ch== ')' && st.back() == '(') ||
                   (ch== ']' && st.back() == '[') ||
                   (ch== '}' && st.back() == '{'))
                   {
                       st.pop_back();
                   }else{
                       return false;
                   }
        
            }else{
             return false;
            }
        }
        return st.empty();
    }
};
