int flatlandSpaceStations(int n, vector<int> c) {
    sort(c.begin(),c.end());
    int s=c.size()-1;
    vector<int>k;
    for(int i=0;i<c.size()-1;i++){
        for(int j=i+1;j<=i+1;j++){
            int b=c[j]-c[i];
            k.push_back(b/2);
        }
    }
    k.push_back(c[0]-0);
    k.push_back((n-1)-c[s]);
    return *max_element(k.begin(),k.end());
}
