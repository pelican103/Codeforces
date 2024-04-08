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
		vector<int> A(n);
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		
		sort(A.begin(), A.end());
		// is ceiling formula (ceil(n/2) = n+1/2), -1 because zero-based indexing 
		int index = (n+1)/2 -1;
		int num = count(A.begin() + index, A.end(), A[index]);
		cout << num << "\n";
	}
}