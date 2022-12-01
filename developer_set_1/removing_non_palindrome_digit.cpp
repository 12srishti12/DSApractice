#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=251532;
    string a=to_string(n);
    int i=0,j=a.size()-1;
    while(i<j){
        if(a[i]!=a[j] && a[i]==a[j-1]){
            cout<<a[j];
            break;
        }
        if(a[i]!=a[j] && a[i+1]==a[j]){
            cout<<a[i];
            break;
        }
        i++;
        j--;
        
    }
}
