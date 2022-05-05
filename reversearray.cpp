#include <bits/stdc++.h>
using namespace std;
vector<int>A;
void reverse_arr(int n){
	int p,k;
	for(int i=0;i<n;i++){
		cin>>p;
		A.push_back(p);
	}
	k=A.size();
	
	int i=0;
	int j=k-1;
	while(i<j){
		swap(A[i],A[j]);
		i++;
		j--;
	}
	
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	
}

int main() {
	// sum of digits
	int n;
	cin>>n;
	reverse_arr(n);
	
	return 0;
}
