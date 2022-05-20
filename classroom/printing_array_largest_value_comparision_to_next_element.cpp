#include <bits/stdc++.h>
using namespace std;
// printing array by comparison to next element at the same position in second vector as present in first

int main() {
	vector<int>a={0,10,1,4,7,9,0};
	int n=a.size();
	vector<int>b(n);
	int max=INT_MIN;
	for(int i=a.size()-1;i>=0;i--){
		if(a[i]>max){
			max=a[i];
			b[i]=max;
		}
		b[i]=max;
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
