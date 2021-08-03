
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	short t;
	cin >> t;
	long long a[t];
	int b[t];
	for(short i=0;i<t;i++){
		cin >> a[i];
		int sum=a[i]/10;
		if(a[i]%10==9) sum++;
		b[i]=sum;
	}
	for(short i=0;i<t;i++)
		cout << b[i] << endl;
    return 0;
}


