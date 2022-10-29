int sockMerchant(int n, vector<int> ar) {
    int c=0;
    for(int i=0;i<ar.size();i++){
        for(int j=0;j<ar.size();j++){
            if(i==j) continue;
            if(ar[i]==ar[j] && ar[i]!=-1 && ar[j]!=-1){
                c++;
                ar[i]=ar[j]=-1;
            }
        }
    }
    return c;

}
