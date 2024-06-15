#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		double x,y, ans;
		cin >> x >> y;
		
		ans = ceil(y/2);
		
		while(ans*15 - y*4 < x){
			ans++;
		}
		
		cout << ans << "\n";
	}
}