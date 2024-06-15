#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		
		if(n < m){
			cout << "No" << "\n";
		}
		
		else if((n-m)%2 == 0){
			cout << "Yes" << "\n";
		}
			
		else{
			cout << "No" << "\n";
		}
	}
}