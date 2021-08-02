#include <iostream>

using namespace std;
int main() {
	string ch1,ch2,ch="";
	cin >> ch1 >> ch2;
	for(size_t i=0;i<ch1.length();i++){
		if(ch1[i]==ch2[i]) ch+='0';
		else ch+='1';
	}
	cout << ch << endl;
    return 0;
}
