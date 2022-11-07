class Solution {
public:
    int maximum69Number (int num) {
       string s= to_string(num);
       for(int i=0;i<s.size();i++){
           if(s[i]-'0'==9) continue;
           else if(s[i]- '0' != 9){
               s[i]='9';
               break;
           }
       }
       return stoi(s);
    }
};

https://leetcode.com/problems/maximum-69-number/submissions/838895456/
