
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string ch,word="hello",rep="NO";
	cin >> ch;
	size_t j=0;
	for(size_t i=0;i<ch.size();i++){
		if(ch[i]==word[j]){
			j++;
		}
		if(j==word.size()){
			rep="YES";
			break;
		}
	}
	cout << rep << endl;
    return 0;
}
