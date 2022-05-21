class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        sum=sum+nums[0];
        nums[0]=sum;
        for(int j=1;j<nums.size();j++){
            sum=sum+nums[j];
            nums[j]=sum;
        }
        
        return nums;
        
    }
};
