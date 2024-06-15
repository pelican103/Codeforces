#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char, int>cnt;
		
		for(int i = 0; i < s.size(); i++){
			cnt[s[i]]++;
		}
		
		int h = min(cnt['L'], cnt['R']);
		int v = min(cnt['U'], cnt['D']);
		
		if(v == 0){
			h = min(h,1);
		}
		
		if (h == 0){
			v = min(v, 1);
		}
		
		cout << 2*(h+v) << "\n";
		
		for(int i = 0; i < h; i++){
			cout << "L";
		}
		
		for(int i = 0; i < v; i++){
			cout << "U";
		}
		
		for(int i = 0; i < h; i++){
			cout << "R";
		}
		
		for(int i = 0; i < v; i++){
			cout << "D";
		}
		
		cout << "\n";
	}
}