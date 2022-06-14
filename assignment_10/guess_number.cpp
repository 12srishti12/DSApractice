int guessNumber(int n) {
        int low=0,high=n,mid;
        // vector<int>a;
        // for(int i=1;i<=n;i++) a.push_back(i);
        while(high>=low){
            mid=low+(high-low)/2;
            if(guess(mid)==0) return mid;
            else if(guess(mid)==-1){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return 0;
    }
};

https://leetcode.com/submissions/detail/722218466/
