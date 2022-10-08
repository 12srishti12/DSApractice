class Solution {
public:
    
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1) return false;
        if(nums.size()==2){
            if(nums[0]==nums[1]) return true;
            return false;
        }
        int low,high,mid;
        low=0;
        high=nums.size()-1;
        while(high>=low){
            mid=low+(high-low)/2;
            if(nums[mid]==nums[low] && low!=mid) {
                return true;
            }
            if(nums[high]==nums[high-1]) return true;
            
            low=mid+1;
            
        }
        low=0;
        high=nums.size()-1;
        while(high>=low){
            mid=low+(high-low)/2;
            if(nums[mid]==nums[high] && high!=mid){
                return true;
            }
            if(nums[low]==nums[low+1]) return true;
            high=mid-1;
        }
        return false;
    }
};

https://leetcode.com/problems/contains-duplicate/submissions/817884243/
