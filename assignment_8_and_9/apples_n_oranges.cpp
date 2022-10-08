void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int sa=0,so=0;
    for(int i=0;i<apples.size();i++){
        apples[i]=apples[i]+a;
        if(apples[i]>=s && apples[i]<=t){
            sa++;
        }
    }
    for(int i=0;i<oranges.size();i++){
        oranges[i]=oranges[i]+b;
        if(oranges[i]<=t && oranges[i]>=s){
            so++;
        }
    }
    cout<<sa<<"\n"<<so;
}

https://www.hackerrank.com/submissions/all
