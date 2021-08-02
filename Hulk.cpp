#include <iostream>
 
using namespace std;
int main() {
	string h,l,ch="";;
	int n;
	h="I hate ";
	l="I love ";
	cin >> n;
	for(int i=1;i<=n;i++){
		if(i % 2==0) ch+=l; 
		else ch+=h;
		
		if(i==n) ch+="it";
		else ch+="that ";
		
		}
	cout <<  ch << endl;
    return 0;
}
