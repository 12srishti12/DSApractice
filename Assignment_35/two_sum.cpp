class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>s;
        int i=0;
        while(i<nums.size()){
            if(s.find(target-nums[i])==s.end()){
                s[nums[i]]=i;
            }
            else if(s.find(target-nums[i])!=s.end()){
                return{i,s[target-nums[i]]};
            }
            i++;
        }
        return{-1,-1};
    }
};

https://leetcode.com/problems/two-sum/submissions/831460882/
