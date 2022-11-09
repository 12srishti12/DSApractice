class Solution {
public:
    int romanToInt(string s) {
        int c=0;
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int i =0;
        for(;i<s.size()-1;i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]<mp[s[i+1]]){
                    c=c+(mp[s[i+1]]-mp[s[i]]);
                    i++;
                    }
                    
                
                else{
                    c=c+mp[s[i]];
                }
            }
        }
        c=c+mp[s[i]];
            return c;
        }
        
    
};

https://leetcode.com/problems/roman-to-integer/submissions/839942532/
