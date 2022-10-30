int hurdleRace(int k, vector<int> height) {
    int i=*max_element(height.begin(),height.end());
    if(i>k) return abs(i-k);
    return 0;

}
