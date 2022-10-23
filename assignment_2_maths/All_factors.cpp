vector<int> Solution::allFactors(int A) {
    vector<int>f;
    if(A==1) return {1};
    f.push_back(1);
    for(int i=2;i<=sqrt(A);i++){
        if(A%i==0){
           f.push_back(i); 
           f.push_back(A/i);
        }
    }
    f.push_back(A);
    f.erase(unique(f.begin(), f.end()),f.end());
    sort(f.begin(),f.end());
    return f;
}
