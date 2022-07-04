string compare(string a,string b){
    string c ="";
    string d ="";
    for (int i = 0;i<a.size();i++) {
        if ((a[i]-'0')>0) {
            c = a.substr(i,(a.size() - i));
            break;
        }
    }
    for (int j = 0;j<b.size();j++) {
        if ((b[j]-'0')>0) {
            d = b.substr(j,(b.size() - j));
            break;
        }
    }
    if (c.size()>d.size())     cout<<c <<" is greater";
    else if (c.size()<d.size())   cout<<d <<" is greater";
    else if (c.size()==d.size()) {
        for (int i =0;i<c.size();i++){
            if (c[i] - '0'>d[i]-'0') {
                cout<<c;
                break;
            }
            else if (c[i] - '0'<d[i]-'0') {
                cout<<d;
                break;
            }
            else if (c[i]-'0'==d[i]-'0') {
                cout<<"both are equal";
                break;
            }
     }
    }
    return c,d;
}

int main(){
    string a,b;
    cin>>a>>b;
    compare(a,b);
}
