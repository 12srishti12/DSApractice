//here we finding the sum of subarray
int s=0;
void P(vector<int>k){
    for(int a:k) cout<<a<<" ";
    cout<<"\n";
}
int sub_sum(vector<int>&arr,vector<int>&sb,int i,int sum){
    if(i==arr.size()){
        if(s==sum) P(sb);
        return -1;
    }
    s=s+arr[i];
    sb.push_back(arr[i]);
    sub_sum(arr,sb,i+1,2);
    s=s-arr[i];
    sb.pop_back();
    sub_sum(arr,sb,i+1,2);
    return -1;
}

int main() {
    vector<int>arr;
    vector<int>sb;
    arr={1,2,1};
    sub_sum(arr,sb,0,2);
    //for(int i=0;i<sb.size();i++) cout<<sb[i]<<" ";
    //cout<<"\n";
}
