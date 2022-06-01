class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low,high,mid;
        low=0;
        high=nums.size()-1;
        while( high>=low){
            mid=low+(high-low)/2;
            if(target==nums[mid]) return mid;
            else if(target<nums[mid]){
                high = mid-1;
            }
            else if(target>nums[mid]){
               
                low = mid +1;
            }
            
             
        }
        return -1;
    }
};
