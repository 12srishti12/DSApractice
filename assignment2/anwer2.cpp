#include<bits/stdc++.h>
using namespace std;


int max_of_four(int a,int b,int c, int d){
    int x,y;
    if(a>b){
        x=a;
    }
    else {
        x=b;
    }
    if(c>d){
        y=c;
    }
    else{
        y=d;
    }
    if(x>y){
        return x;
    }
    else{
        return y;
    }
    
   
}


int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}
