#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		int A[n], count=0;
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		sort(A, A+n);
		for(int i = 0; i < n; i++){
			if(A[i] == 1 && A[i+1] == 1){
				count++;
				i++;
			}
			else{
				count++;
			}
		}
		
	cout << count << "\n";	
	}
}