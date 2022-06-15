int mySqrt(int x) {
        int low,high;
        long long mid;
        low=0;
        high=x;
        while(high>=low){
            mid=low+(high-low)/2;
            cout<<" low "<<low<<" high "<<high<<" mid "<<mid<<"\n";
            if(x==mid*mid) return mid;
            else if(mid*mid<x && x<(mid+1)*(mid+1)) return mid;
            else if(x>mid*mid){
                low=mid+1;
            }
            
            else if(x<mid*mid){
                high=mid-1;
            }
            
            cout<<"low "<<low<<" high "<<high<<" mid "<<mid<<"\n";
        }
        return 0;
    }
};


link=https://leetcode.com/submissions/detail/722526872/
