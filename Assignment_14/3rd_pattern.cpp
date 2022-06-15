#include <iostream>
using namespace std;

int main() {
	int n,c;
	cin>>n;
	while(n>=0){
		c=n%10;
		for(int i=1;i<=c;i++){
			cout<<"#";
		}
		cout<<"\n";
		n=n/10;
		
	}
	// your code goes here
	return 0;
}
