int divisibleSumPairs(int n, int k, vector<int> ar) {
    sort(ar.begin(),ar.end());
    int count=0;
    for(int i=0;i<ar.size()-1;i++){
        for(int j=i+1;j<ar.size();j++){
            if((ar[i]+ar[j])%k==0) count++;
        }
    }
    return count;

}
