#include <bits/stdc++.h>
using namespace std;
vector<int>S;
void ap(int a,int n,int d){
	int ar;
	
	S.push_back(a);
	for(int i=0;i<n;i++){
		a=a+d;
		S.push_back(a);
	}
	for(int i=0;i<n;i++){
		cout<<S[i]<<" ";
	}
}

int main() {
	// your code goes here
	int a,n,d,k;
	cin>>a>>n>>d;
	ap(a,n,d);
	
	return 0;
}
