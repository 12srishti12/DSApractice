int Solution::power(string A) {
    
    int num = 0;
    int n = A.size();
    for(int i=0;i<n;i++){
        num = num * 10 + (A[i] - '0');
    }
     //cout<<num;   
    //if(num==0) return num;
    if(num==1) return 0;
    if(num & (num-1)) return 0;
    else return 1;
    
}
