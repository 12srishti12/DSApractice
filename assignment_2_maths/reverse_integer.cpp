int Solution::reverse(int A) {
    int n=A;
    long long a=0;
    if(n<0) n=n*(-1);
    while(n>0){
        a=a*10+n%10;
        n=n/10;
        
    }
   if(A<0){
       a=a*(-1);
   }
   if(a>=INT_MIN && a<=INT_MAX) return a;
   return 0;
}
