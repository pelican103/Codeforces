#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		string s;
		
		cin >> n >> m >> s;
		
		vector<int>cnt(7,m);
		
		for(auto e: s){
			cnt[e-'A']--;
			cnt[e-'A'] = max(0, cnt[e-'A']);
		}
		
		cout << accumulate(cnt.begin(),cnt.end(),0) << "\n";
		
		
	}
}