#include<bits/stdc++.h>
using namespace std;
int main(){
    int b[3][3],a[3][3],c[3][3];
    cout<<"Enter the elements for first matrix of size 3X3:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements for second matrix of size 3X3\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=0;
            c[i][j]=a[i][j]+b[i][j];
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<c[i][j]<<" ";
        }
         cout<<"\n";
    }
}
