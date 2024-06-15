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
		int k,q,n;
		cin >> k >> q;
		vector<int> v(k);

		for(int i = 0; i < k; i++){
			cin >> v[i];
		}
		for(int i = 0; i < q; i++){
			cin >> n;
			cout << min(v[0]-1, n) << ' ';
		}
		cout << "\n";
	}
}