#include<bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	string a;
    string b;
    char k;
    int len1,len2;
    cin>>a;
    cin>>b;
    len1=a.size();
    len2=b.size();
    cout<<len1<<" "<<len2<<endl;
    string s;
    s=a+b;
    cout<<s<<endl;
    k=a[0];
    a[0]=b[0];
    b[0]=k;
    cout<<a<<" "<<b;
    return 0;
}
