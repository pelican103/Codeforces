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
		vector<int> A(101, 0);
		
		for(int i = 0 ; i < n; i++){
			int x;
			cin >> x;
			A[x]++;
		}
		
		for(int &i : A){
			ans += i / 3;
		}
		
		cout << ans << "\n";
	}
}