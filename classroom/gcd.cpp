#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	int rn=0;
	if(b>a) swap(a,b);
	rn=a%b;
	while(rn!=0){
		a=b;
		b=rn;
		rn=a%b;
	}
	return b;
}

 

int main() {
	int a,b,n;
	cin>>a>>b;
	n=gcd(a,b);
	cout<<n;
	
	return 0;
}
