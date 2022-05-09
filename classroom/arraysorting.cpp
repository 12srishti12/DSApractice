#include <bits/stdc++.h>
using namespace std;
vector<int>c;
vector<int> mergesortedArrays(vector<int>a,vector<int>b){
	int i=0;
	int j=0;
	while(i<a.size() && j<b.size()){
		if(a[i]<b[j]){
			c.push_back(a[i]);
			i++;
		}
		else {
			c.push_back(b[j]);
			j++;
		}
		while(i<a.size()){
			c.push_back(a[i]);
                        i++;
		}
		while(j<b.size()){
			c.push_back(b[j]);
			j++;
		}
	
	}
	return c;
}


int main() {
	vector<int>a={1,2,5,6};
	vector<int>b={1,3,4,7};
	vector<int>c=mergesortedArrays(a,b);
	for(int x:c){
		cout<<x<<" ";
	}
    return 0;
}
