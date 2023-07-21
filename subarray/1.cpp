

void Print(vector<int>p){
    for(int i=0;i<p.size();i++) cout<<p[i]<<" ";
    cout<<"\n";
}
int subarray(int i,vector<int>&a,vector<int>k){
    if(i==a.size()){
        Print(k);
        return 0;
    }
    k.push_back(a[i]);
    subarray(i+1,a,k);
    k.pop_back();
    subarray(i+1,a,k);
    return 1;
}

int main() {
    vector<int>a;
    vector<int>k;
    a={3,2,1};
    subarray(0,a,k);
    
}
