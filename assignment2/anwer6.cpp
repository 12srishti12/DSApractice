#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>A;
    int n,p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p;
        A.push_back(p);
    }
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(A[i]>=max1){
            max2=max1;
            max1=A[i];
        }
        else if(A[i]<max1 && A[i]>max2){
            max2=A[i];
        }
    }
    cout<<max1<<" "<<max2;
}
