#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long n;
	cin>>n;
	int rn=0;
	while(n>0){
		rn=rn*10+n%10;
		n=n/10;
	}
	cout<<rn;
	return 0;
}
