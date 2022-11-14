string appendAndDelete(string s, string t, int k) {
    int i=0,j=0;
    while(i<s.size() && j<t.size()){
        if(s[i]!=t[j]) break;
        i++;
        j++;
        
    }
    if((s.size()-i)+(t.size()-j) <=k && (k-(s.size()-i)+(t.size()-j))%2==0 ){
        return "Yes";
    } 
    if((s.size()+t.size())<=k) return "Yes";
    return "No";
}
