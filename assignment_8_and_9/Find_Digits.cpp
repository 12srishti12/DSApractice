int findDigits(int n) {
    int k,c=0,a=n;
    while(a>=1){
        k=a%10;
        a=a/10;
        if(k==0 || n%k!=0){
            continue;         
        }
        if(n%k==0) c++;  
    }
    return c;
}
