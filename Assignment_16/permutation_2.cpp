class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>k;
        vector<vector<int>>s;
        sort(nums.begin(),nums.end());
        s.push_back(nums);
        while(next_permutation(nums.begin(),nums.end())){
            for(int i=0;i<nums.size();i++){
                k.push_back(nums[i]);
            }
            s.push_back(k);
            k.clear();
        }
        return s;
    }
};
