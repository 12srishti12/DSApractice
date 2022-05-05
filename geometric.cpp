#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int>A;
void geom(int a,int r,int n){
	A.push_back(a);
	for(int i=0;i<=n;i++){
		a =a*r;
		A.push_back(a);
	}
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}

signed main() {
	// your code goes here
	int a,r,n;
	cin>>a>>r>>n;
	geom(a,r,n);
	return 0;
}
