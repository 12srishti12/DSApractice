#include<bits/stdc++.h>
using namespace std;
 int main(){
    vector<string>A={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++){
        if(i<=9){
            cout<<A[i-1]<<"\n";
        }
        else{
            cout<<A[9+(i%2)]<<"\n";
        }
    }
 } 
