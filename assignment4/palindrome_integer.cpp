class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        int rn=0;
        int max=INT_MAX/10;
        int min=INT_MIN/10;
        while(x>0){
            if(rn>max || rn<min) return 0;
            rn=rn*10+x%10;
            x=x/10;
            }
        if(rn==y) return true;
        else return false;
        }
};

//shorter code below

class Solution {
public:
    bool isPalindrome(int x) {
        long long y=x,r=0;
        
        while(x>0){
            r=r*10+x%10;
            x=x/10;
        }
        if(r==y) return true;
        return false;
    }
};
