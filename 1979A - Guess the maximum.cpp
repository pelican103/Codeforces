#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, mini=0;
		cin >> n;
		int A[n];
		for(int i = 0 ; i < n; i++){
			cin >> A[i];
		}
		mini = max(A[0], A[1]);
		for(int i = 1 ; i<n-1;i++){
			mini = min(mini, max(A[i], A[i+1]));
		}
		cout << mini -1 << "\n";
	}
}