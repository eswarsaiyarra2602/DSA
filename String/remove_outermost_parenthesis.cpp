//leetcode - 1021

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int ctr = 0 ;
        bool flag = true;
        for(int i = 0 ; i<s.length() ; i++){
            if(flag && s[i]=='('){
                flag = false;
            }
            else if(!flag && ctr==0 && s[i]==')'){
                flag = true;
            }
            else{
                if(s[i]=='('){
                    ctr++;
                    result+=s[i];
                }
                else if(ctr>0 && s[i]==')' )
                {
                    ctr--;
                    result+=s[i];
                }
                
            }
        }
        return result;
    }
};
