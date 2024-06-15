#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int count = 0;
		cin >> s;
		
		for(int i = 0; i < s.length(); i++){
			if(s[i] != s[0]){
				swap(s[i], s[0]);
				count++;
				break;
			}
		}
		if(count > 0){
			cout << "YES" << "\n";
			cout << s << "\n";
		}
		else{
			cout << "NO" << "\n";
		}
	}
}