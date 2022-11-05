int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    sort(keyboards.begin(),keyboards.end());
    sort(drives.begin(),drives.end());
    vector<int>t;
    for(int i=drives.size()-1;i>=0;i--){
        for(int j=keyboards.size()-1;j>=0;j--){
            if(drives[i]+keyboards[j]<=b) t.push_back(drives[i]+keyboards[j]);
        }
    }
    if(t.size()!=0) return *max_element(t.begin(),t.end());
    return -1;
}
