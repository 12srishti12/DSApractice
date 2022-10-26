class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1,f;
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                max1=(nums[i]-1)*(nums[j]-1);
                a.push_back(max1);
            }
        }
        f= *max_element(a.begin(),a.end());
        return f;
    }
};

https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/submissions/830784975/
