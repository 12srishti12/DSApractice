class Solution {
public:
    vector<int>prime;
    int countPrimes(int n) {
        int s=n;
        vector<bool>isprime(n,1);
        for(long i=2;i<n;i++){
            if(!isprime[i]) continue;
            prime.push_back(i);
            for(long long j=i*i;j<s;j=j+i){
                isprime[j]=0;
            }
        }
        return prime.size();
    }
};



https://leetcode.com/submissions/detail/739376719/
