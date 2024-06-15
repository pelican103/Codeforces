#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int p[n];
		for(int i = 0; i < n; i++){
			cin >> p[i];
			p[i]--;
		}
		int ans = 3;
		for(int i = 0; i < n; i++){
			if(p[p[i]] == i){
				ans = 2;
			}
		}
		cout << ans << "\n";
	}
}