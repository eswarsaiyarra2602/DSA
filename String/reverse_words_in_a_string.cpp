//leetcode - 151

//appproach - 1 (stringstream libray )
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word ; 
        vector<string>words;
        while(ss>>word){
            words.push_back(word);
        }
        string result = "";
        reverse(words.begin(), words.end());
        for(int i = 0 ; i<words.size(); i++)
        {
            if(i!=0){
                result+=" ";
            }
            result += words[i];
        }
        return result; 
    }
};


//approach - 2 (two-pointer)

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int i = 0;
        int l = 0, r = 0;
        int n = s.length();
        while(i < n) {
            while(i < n && s[i] != ' ') { 
                s[r++] = s[i++];
            }
            
            if(l < r) { 
                reverse(s.begin()+l, s.begin()+r);
                
                s[r] = ' ';
                r++;
                
                l = r;
            }
            
            i++; 
        }
        s = s.substr(0 , r-1);
        return s;
        
    }
};
