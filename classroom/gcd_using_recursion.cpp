#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b>a) swap(a,b);
	if(a%b==0){
		return b;
	}
	return gcd(a%b,b);
}

 

int main() {
	int a,b,n;
	cin>>a>>b;
	n=gcd(a,b);
	cout<<n;
	
	return 0;
}
