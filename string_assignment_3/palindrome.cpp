int Solution::isPalindrome(string A) {
    for(char a:A){
       if(isalnum(a)==1) continue;
       else{
           A.erase(remove(A.begin(), A.end(), a), A.end());
       }
    }
    cout<<A<<" ";
    int h=sizeof(A)/2;
    for(int i=0;i<h;i++){
        A[i]=tolower(A[i]);
        cout<<A[i]<<" ";
        for(int j=sizeof(A)-1;j>=h;j--){
            A[j]=tolower(A[j]);
            cout<<A[j]<<" ";
            if(A[i]!=A[j]) return 0;
        }
    }
    return 1;
}
