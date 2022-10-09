int migratoryBirds(vector<int> arr) {
    vector<int>count(2*1e5,0);
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
    }
    int c= *max_element(count.begin(),count.end());
    for(int i=0;i<count.size();i++){
        if(count[i]==c) return i;
    }
    return 0;

}
