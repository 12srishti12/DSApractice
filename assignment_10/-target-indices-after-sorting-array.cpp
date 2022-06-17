  vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int low,high,mid,ans,ans1,i;
        low=0;
        high=nums.size()-1;
        mid=low+(high-low)/2;
        i=0;
        while(i<=mid){
            if(nums[i]==target){
                ans=i;
                index.push_back(ans);
            }
            i++;
            
            
        }
        i=mid+1;
        while(i<=nums.size()-1){
            if(nums[i]==target){
                index.push_back(i);
                cout<<i;
            }
            i++;
        }
            
       sort(index.begin(),index.end());
        return index;
    }
};
link=https://leetcode.com/submissions/detail/724590992/
