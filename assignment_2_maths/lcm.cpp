long long gcd(long long a,long long b){
    if(b>a) swap(a,b);
    long long rn=a%b;
    while(rn!=0){
        a=b;
        b=rn;
        rn=a%b;
    }
    return b;
}

long Solution::solve(int A, int B) {
    long long x=A;
    x=x*B;
    long long y=x/gcd(A,B);
    return y;
    
}
