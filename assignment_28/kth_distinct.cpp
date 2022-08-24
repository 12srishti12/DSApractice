class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(string a:arr){
            mp[a]++;
        }
        int count=0;
        for(string c:arr){
            if(mp[c]==1){
                count++;
                if(count==k) return c;
            }
        }
        return "";
    }
};
