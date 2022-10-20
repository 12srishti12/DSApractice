string Solution::solve(string A) {
        vector<char>a = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        cout<<a[0];
        vector<int>s(26,0);
        for(int i=0;i<sizeof(A);i++){
            auto j = find(a.begin(), a.end(), A[i]);
            cout<<j;
            s[j]++;
        }
        for(int i=0;i<A.size();i++){
            auto k= find(a.begin(),a.end(),A[i]);
            p= s[k]+A[i];
        }
        cout<<p;
}
