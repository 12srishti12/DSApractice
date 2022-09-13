class Solution {
public:
    int t(vector<int>& nums, int target,int flag){
        int mid,low,high,index=-1;
        vector<int>a;
        low=0;
        high=nums.size()-1;
        while(high>=low){
            mid=low+(high-low)/2;
            if(target==nums[mid]){
                index=mid;
                if(flag==0) high=mid-1;
                else low=mid+1;
            }
            if(target>nums[mid]) low=mid+1;
            if(target<nums[mid]) high=mid-1;
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int smaler,larger;
        smaler=t(nums,target,0);
        larger=t(nums,target,1);
        vector<int>a;
        a.push_back(smaler);
        a.push_back(larger);
        return a;
    }
};

https://leetcode.com/submissions/detail/798821757/
