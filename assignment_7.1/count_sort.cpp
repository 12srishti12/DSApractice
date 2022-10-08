class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int>count(5*1e4,0);
        vector<int>s;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(int i=0;i<count.size();i++){
            if(count[i]!=0){
                int k=count[i];
                while(k>0){
                    s.push_back(i);
                    k--;
                }
            }
        }
        return s;
    }
};
