#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, ans = 0;
		cin >> n;
		string s;
		cin >> s;
		
		for(int i = 1; i < n; i++){
			ans += (s[i] == '@');
			if(s[i] == '*' && s[i-1] == '*'){
				break;
			}
		}
		cout << ans << "\n";
	}
}