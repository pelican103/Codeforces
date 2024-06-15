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
		int a[n];
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
		}
		
		int mx = 0;
		long long sum = 0, ans = 0;
		
		for(int i = 0 ; i< n; i++){
			sum += a[i];
			mx = max(a[i], mx);
			if(sum - mx == mx){
				ans++;
			}
		}
		
		cout << ans << "\n";
	}
}