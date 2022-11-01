int permut(vector<int>a){
    int s=0;
    for(int i=0;i<a.size();i++){
        s=s*10+a[i];
    }
    return s;
}



int Solution::divisibleBy60(vector<int> &A) {
    if(permut(A)%60==0) return 1;
    while(next_permutation(A.begin(),A.end())){
        //next_permutation(A.begin(),A.end());
        permut(A);
        if(permut(A)%60==0) return 1;
    }
    
    return 0;
}
