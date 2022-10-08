#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>A){
    for(int a:A) cout<<a<<" ";
    cout<<"\n";
}
int getMinIndex(vector<int>&A, int i){
    int min_index=i;
    for(;i<A.size();i++){
        if(A[i]<A[min_index]){
            min_index=i;
        }
    }
    return min_index;
}
vector<int>mergeSortedArrays(vector<int>A,vector<int>B){
    //Time Complexity: O(n+m)
    //Space Complexity  O(n+m)
    vector<int>C;
    int i=0,j=0;
    while(i<A.size() && j<B.size()){
        if(A[i]<B[j]){
            C.push_back(A[i]);
            i++;
        }
        else {
            C.push_back(B[j]);
            j++;
        }
    }
    while(i<A.size()){
        C.push_back(A[i++]);
    }
    
    while(j<B.size()){
        C.push_back(B[j++]);
    }
    return C;
}

void selectionSort(vector<int>&A){
    for(int i=0;i<A.size();i++){
        int min_index = getMinIndex(A,i);
        swap(A[i],A[min_index]);
    }
}
void Sort(vector<int>&A){
    cout<<"Sortint Array: "; printVector(A);
    if(A.size()>1){
        vector<int>C;
        vector<int>D;
        int n=A.size();
        for(int i=0;i<n/2;i++){
            C.push_back(A[i]);
        }
        for(int i=n/2;i<n;i++){
            D.push_back(A[i]);
        }
        Sort(C);
        Sort(D);
        A = mergeSortedArrays(C,D);
        return;
    }
}

// T(n) = n+2*T(n/2) +n
// 2*T(n/2)
int main() {
    vector<int>A = {5,4,3,6,3,4,1,2,4,6,7};
    Sort(A);
    cout<<"AfterSorting: ";printVector(A);
}
