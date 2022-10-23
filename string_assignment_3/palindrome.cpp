int Solution::isPalindrome(string A) {
    for(char a:A){
       if(isalnum(a)==1) continue;
       else{
           A.erase(remove(A.begin(), A.end(), a), A.end());
       }
    }
    int m=A.size()-1;
    int n= A.size()/2;
    int i=0, j=m;
    while(i<n && j>=n){
        A[i]=tolower(A[i]);
        A[j]=tolower(A[j]);
        if(A[i]!=A[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
