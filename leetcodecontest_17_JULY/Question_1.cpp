class Solution {
public:
    vector<int>k;
    vector<int> numberOfPairs(vector<int>& nums) {
        int pair=0,c=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j] && nums[i]!=-1 && nums[j]!=-1) {
                    pair++;
                    nums[i]=-1;
                    nums[j]=nums[i];
                }
                
            }
        }
       // cout<<pair<<"\n";
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=-1) c++;
        }
        k.push_back(pair);
        k.push_back(c);
        return k;
    }
};
