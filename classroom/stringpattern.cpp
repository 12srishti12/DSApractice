void string_Com(string l="",string x="abc"){
   // cout<<l<<"\n";
    //if(l.size()<x.size()) cout<<l<<"\n";
    if(l.size()==x.size())
    {
        cout<<l<<"\n";
        return;
    }
    for(char k:x){
        string_Com(l+k,x);
    }
}
int main() {
    //string s="";
    string k="";
    cin>>k;
    string_Com("",k);
}
