#include <iostream>

using namespace std;
int main() {
	int n;
	int t[100];
	float res=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> t[i];
		res+=t[i];
	}
	res/=n;
	cout << res << endl;
	
    return 0;
}
