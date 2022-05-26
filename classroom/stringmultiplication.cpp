string sums(string a,string b){
     string k="0123456789";
    string sum="";
    int i=a.size()-1;
    int j=b.size()-1;
    int sum1,carry=0,c;
    while(i>=0 && j>=0){
        c=(a[i]-'0')+(b[j]-'0')+carry;
        sum1=c;
        c=sum1%10;
        carry=sum1/10;
         
        sum=sum+k[c];
        i--;
        j--;
    }

    while(i>j){
        c=a[i]-'0'+carry;
        sum1=c;
        c=sum1%10;
        carry=sum1/10;
        sum=sum+k[c];
        i--;
    }
    while(j>i){
        c=b[j]-'0'+carry;
        sum1=c;
        c=sum1%10;
        carry=sum1/10;
        sum=sum+k[c];
        j--;
    }
    if(carry>0){
        sum=sum+k[carry];
    }
    reverse(sum.begin(),sum.end());
    return sum;
}


string product(string x ,int y){
    string k="0123456789";
    string m="";
    int m1,m2,carry=0;
   for(int i=x.size()-1;i>=0;i--){
           m1=(x[i]-'0')*y+carry;
           m2=m1;
           m1=m2%10;
           carry=m2/10;
           
           m=m+k[m1];
       }
    if(carry>0){
        string z= to_string(carry);
        m=m+z;
    }
    
    reverse(m.begin(),m.end());
    return m; 
}
string multi(string a,string b){
    int n=b.size()-1;
    string sum="";
    string multiply="";
    for(int i=n;i>=0;i--){
        sum=product(a,(b[i]-'0'));
        for(int j=i+1;j<n+1;j++){
            sum=sum+'0';
        }
        multiply=sums(multiply,sum);
    }
    cout<<multiply;
    return multiply;
}
    
int main(){
    string a,b;
    cin>>a>>b;
    multi(a,b);

    
}
