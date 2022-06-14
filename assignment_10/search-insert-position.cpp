int searchInsert(vector<int>& nums, int target) {
int low,high,mid,n;
        low=0;
        n=nums.size();
        //cout<<n<<"\n";
        high=n-1;
        while(high>=low){
            mid=low+(high-low)/2;//mid=1
            cout<<"low: "<<low<<" high: "<<high<<" mid: "<<mid<<"\n";            
            if(nums[mid]==target)  return mid;
            else if(nums[mid]>target){
                high=mid-1;

            }
            else{
                low=mid+1;
            }
            
        }
       cout<<"low: "<<low<<" high: "<<high<<" mid: "<<mid<<"\n";
        
        
        return low;
    }

link=https://leetcode.com/submissions/detail/721742282/
