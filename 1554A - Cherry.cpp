
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	long long b[t];
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		long long a[n];
		for(int j=0;j<n;j++){
			cin >> a[j];
		}
		long long maxx=a[0]*a[1];
		for(int j=1;j<n-1;j++){
			maxx=max(maxx,max(a[j]*a[j+1],a[j]*a[j-1]));
		}
		b[i]=maxx;
	}
	for(int i=0;i<t;i++)
		cout << b[i] << endl;
    return 0;
}
