class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>A;
        for(int i=0;i<nums.size();i++){
            if(A.find(target-nums[i])!=A.end()){
                return{i,A[target-nums[i]]};
            }
            A[nums[i]]=i;
        }
        return{-1,-1};
    }
};



https://leetcode.com/submissions/detail/782216324/
