class Solution {
public:
    vector<int>k;
    vector<vector<int>>s;
    vector<vector<int>> permute(vector<int>& nums) {
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
