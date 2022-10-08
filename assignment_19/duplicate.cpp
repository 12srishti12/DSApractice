class Solution {
public:
    
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=i+1;
        while(i<nums.size() && j<nums.size()){
            if(nums[i]==nums[j]) return true;
            i++;
            j++;
        }
        return false;
    }
};

https://leetcode.com/problems/contains-duplicate/submissions/818014705/
