class Solution {
public:
    string removeOuterParentheses(string s) {
         string ans="";
        int open=0;
        for(int i=0;i<s.size();i++){
        if(s[i] == '('){
            if(open>0)
              ans+='(';
             open++;
        }

        if(s[i] == ')'){
            if(open>1){
                ans+=')';
            }
        open--;

            }
        }
        return ans;
    }
    
};