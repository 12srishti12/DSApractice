class Solution {
public:
    
    int function(vector<int>& nums){
        int low=0;
        high=nums.size()
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]!=mid[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
        }
    }
    int singleNonDuplicate(vector<int>& nums) {
        int low,high,mid,c;
        low=0;
        high=nums.size()-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==nums[mid-1]){
                c=func(nums[mid]);
            }
            if(nums[mid]==nums[mid+1]){
                k=func(nums[mid+1]);
            }
            
            else{
                return mid;
            }
        }
        return mid;
    }
};
