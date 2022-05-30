bool compare(string a,string b){
    int i=0;int j=0;
    while(i<a.size() && a[i]=='0')  i++;
    while(j<b.size() && b[j]=='0')  j++;
    
    if(a.size()-i>b.size()-j) return 1;
    else if(a.size()-i<b.size()-j) return 0;
    else{
        while(i<a.size()){
            if(a[i]>b[i]) return 1;
            else if(a[i]<b[i]) return 0;
            i++;
        }
    }
    return 1;
}
string sub(string x,string y){
    string k="0123456789";
    int i=x.size()-1;
    int j=y.size()-1;
    int carry=10;
    string s="";
    while(i>=0 && j>=0){
        if(x[i]<y[j]){
            int c=((x[i]-'0')+carry)-(y[j]-'0');
            x[i-1]=((x[i-1]-'0')-1) +'0';
            s=s+k[c];
        }
        else{
            int c=(x[i]-'0')-(y[j]-'0');
            s=s+k[c];
        }
        i--;j--;
        
    }
    reverse(s.begin(),s.end());
    cout<<s;
    return "k";
}
int main(){
    string a,b;
    cin>>a>>b;
   if(compare(a,b)) sub(a,b);
   else sub(b,a);

}
    
