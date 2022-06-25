#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    //returns true if target is present in A else
    for(int i=0;i<A.size();i++){
        if(A[i]==target) return true;
    }
    
    return false;
}

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    //returns true if target is present in A
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){
            if(target==A[i][j]) return true;
            }
    }
    
    return false;
}
bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    //returns true if target is present in row r of A then returns true else return false;
    for(int i=0;i<A[r].size();i++){
        if(A[r][i]==target) return true;
    }
    return false;
}

bool isTragetPresentInCol(vector<vector<int> >A, int target, int c){
    //returns true if target is present in column c of A then returns true else return false;
    for(int i=0;i<A.size();i++){
        if(A[i][c]==target)return true;
    }
    return false;
}


int main() {
    vector<int>B={1,2,3};
    if(isTargetPresent(B,2)){
        cout<<"Present in the given 1D array"<<"\n";
    }
    else{
        cout<<"Not present in the given 1D array"<<"\n";
    }
    vector<vector<int>>A={{1,2,3},{4,5,6},{7,8,9}};
    if(isTragetPresentInCol(A,3,2)){
        cout<<"present in the given column"<<"\n";
    }
    else{
        cout<<"not present in the given column"<<"\n";
    }
    if(isTragetPresentInRow(A,3,2)){
        cout<<"present in the given row"<<"\n";
    }
    else{
        cout<<"not present in the given row"<<"\n";
    }
    if(isTargetPresentIn2DVector(A,5)){
         cout<<"present in the given 2D array"<<"\n";
    }
    else{
         cout<<"Not present in the given 2D array"<<"\n";
    }
}
