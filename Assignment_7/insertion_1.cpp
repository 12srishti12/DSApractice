#include<bits/stdc++.h>
using namespace std;
void insertion1(vector<int>a){
    int i=0;
    int k;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]>a[i+1]){
            k=a[i+1];
            int j=i;
            while(a[j]>k){
                a[j+1]=a[j];
                j--;
                for(int i=0;i<a.size();i++){
                    cout<<a[i]<<" ";
                }
                cout<<"\n";
            }
            a[j+1]=k;
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n,e;
    vector<int>a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>e;
        a.push_back(e);
    }
    insertion1(a);
}
