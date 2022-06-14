bool isPerfectSquare(int num) {
        int low=0,high=num;
        long long mid;
        while(high>=low){
            mid=low+(high-low)/2;
            long long n=mid*mid;
            if(num==n) return 1;
            else if(num>n){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return 0; 
    }
};
link=https://leetcode.com/submissions/detail/722248535/
