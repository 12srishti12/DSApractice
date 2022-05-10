#include<bits/stdc++.h>
using namespace std;
void matrix_multi(int a[1000][1000],int b[1000][1000],int x,int y){
    int c[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            c[i][j]=0;
            for(int k=0;k<y;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
}


int main(){
    int mr1,mc1,mr2,mc2;
    cout<<"Enter the rows and column for first matrix\n";
    cin>>mr1>>mc1;
    cout<<"Enter the rows and column for second matrix\n";
    cin>>mr2>>mc2;
    int m1[1000][1000];
    int m2[1000][1000];
    cout<<"enter element for first matrix\n";
    for(int i=0;i<mr1;i++){
        for(int j=0;j<mc1;j++){
            cin>>m1[i][j];
            
        }
    }
    for(int i=0;i<mr2;i++){
        for(int j=0;j<mc2;j++){
            cin>>m2[i][j];

            
        }
    }
    if(mc1==mr2){
        cout<<" MATRIX MULTIPLICATION:\n";
        matrix_multi(m1,m2,mr2,mc1);
    }
   else{
       cout<<"Matrix multiplication not possible";
   }
}
