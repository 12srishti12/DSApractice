#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    vector<int>x(m); 
    vector<vector<int>>a(n,x);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
   for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<a[j][i]<<" ";
       }
        cout<<"\n";
   }
}
