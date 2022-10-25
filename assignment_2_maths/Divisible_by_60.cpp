int to_find(vector<int> B){
    string k="";
    for(int i=0;i<B.size();i++){
        k=k+to_string(B[i]);
    }
    int p;
    p=stoi(k);
    return p;
}
int Solution::divisibleBy60(vector<int> &A) {
    // string k="";
    // for(int i=0;i<A.size();i++){
    //     k=k+to_string(A[i]);
    // }
    // int p;
    // p=stoi(k);
    int s= to_find(A);
    if(s%60==0) return 1;
    if(next_permutation(A.begin(),A.end())) divisibleBy60(A);
    return 0;
}
