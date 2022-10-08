https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/818169372/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low,high,mid;
        low=0;
        high=nums.size()-1;
        if (nums.size()==1) return nums[0];
        if (nums[low] != nums[low +1]) return nums[low];
        while(high>=low){
            mid=low+(high-low)/2;
            cout<<"mid "<<mid<<"\n";
            if(nums[mid]==nums[mid-1]){
                cout<<"1"<<"\n";
                if((mid-1)%2==0){
                    low=mid+1;
                    cout<<"3"<<endl;
                }
                else{
                    high=mid-1;
                    cout<<"4"<<"\n";
                }
                 cout<<"2"<<"\n";
            }
            else if(nums[mid]==nums[mid+1]){
                if((mid+1)%2==0){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else {
                return nums[mid];
            }
        }
        return 0;

        
    }
};
