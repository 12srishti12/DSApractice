int Solution::romanToInt(string A) {
    map<char,int>mp;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
    int i=0,sum=0;
    while(i<A.size()-1){
        if(mp[A[i]]<mp[A[i+1]]) sum=sum-mp[A[i]];
        else{
            sum=sum+mp[A[i]];
        }
        i++;
    }
    sum=sum+mp[A[i]];
    return sum;
    
    
   
}
