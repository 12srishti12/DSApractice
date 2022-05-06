#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b,c,n;
	a=0;
	b=1;
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(int i=0;i<n-2;i++){
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
}
