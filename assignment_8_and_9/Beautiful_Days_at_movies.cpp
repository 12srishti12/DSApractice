int rev(int k){
    int s=0,n=k;
    while(n>=1){
        s=s*10+n%10;
        n=n/10;
    }
    return s;
 }

int beautifulDays(int i, int j, int k) {
    int c=0;
    for(int a=i;a<=j;a++){
        if(abs(a-rev(a))%k==0) c++;
    }
    return c;

}
