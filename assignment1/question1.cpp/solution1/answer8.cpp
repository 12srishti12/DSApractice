#include <bits/stdc++.h>

using namespace std;

int main(){
    long sum=0;
    long a[5];
    //cin>>n;
    for(int i=0;i<5;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    //cout<<sum;

    long min=a[0];
    long max=0;
    for(int i=0;i<5;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    //cout<<min;
    for(int i=0;i<5;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    //cout<<max;
    
    cout<<sum-max<<" "<<sum-min;
}
