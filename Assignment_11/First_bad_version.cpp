class Solution {
public:
    int firstBadVersion(int n) {
        // for(int i=1;i<=n;i++){
        //     if(isBadVersion(i)==true){
        //         return i;
        //     }
        // }
        int low=1,mid;
        int high=n;
        while(high>=low){
            if(isBadVersion(low)==true){
                    return low;
                }
            mid=low+(high-low)/2;
            if(isBadVersion(mid)==true){
                
                high=mid;
                }
            if(isBadVersion(mid)!=true){
                    low=mid+1;
            }
        }
        return mid;
    }
};


https://leetcode.com/problems/first-bad-version/submissions/
