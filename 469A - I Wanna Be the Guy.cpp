#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,t[250],p,q,count=0;
	cin >> n >> p;
	for(int i=0;i<p;i++){
		cin >> t[i];
	}
	cin >> q;
	for(int i=p;i<q+p;i++){
		cin >> t[i];
	}
	sort(t,t+(p+q));
	    for(int i = 0 ; i < p+q ; i++){
        if(t[i] != t[i+1]){
            count++;
        }
    }

    if(n == (count)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}
