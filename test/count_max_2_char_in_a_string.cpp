int main() {
    string s;
    cin>>s;
    vector<int>A(26,0);
    for(char a:s){
        int i= a-'a';
        A[i]++;
    }
    //Now code for finding the two maximum value from vector
    int max1=INT_MIN,max2=INT_MIN;
    for(int i=0;i<A.size();i++){
        if(A[i]>=max1){
            max2=max1;
            max1=A[i];
        }
        if(A[i]>max2 && A[i]<max1 ){
            max2=A[i];
        }
    }
    cout<<"Max1:"<<max1<<" "<<"Max2:"<<max2<<"\n";
}
