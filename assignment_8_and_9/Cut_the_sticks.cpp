vector<int> cutTheSticks(vector<int> arr) {
    sort(arr.begin(),arr.end());
    vector<int>c;
    int i=0, temp=0,s=arr.size();
    while(i<arr.size()){
        if(temp==arr[i]) i++;
        else{
            temp=temp+(arr[i]-temp);
            c.push_back(s-i);
            i++;
        }
    }
    return c;
    

}
