#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c, d;
		string s;
		cin >> a >> b >> c >> d;
		
		for(int i = 1; i <= 12; i++){
			if(i == a || i == b){
				s += "a";
			} 
			if(i == c || i == d){
				s += "b";
			}
		}
		
		cout << (s == "abab" || s == "baba" ? "YES\n" : "NO\n");
	}
}