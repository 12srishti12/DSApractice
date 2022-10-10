int birthday(vector<int> s, int d, int m) {
    int count=0,sum=0,k;
    for(int i=0;i<m;i++){
        sum=sum+s[i];
    }
    if(sum==d) count++;
    k=m;
    for(int i=0;i<s.size()-m;i++){
        sum=sum-s[i]+s[k];
        k++;
        if(sum==d) count++;
    }
    return count;

}
