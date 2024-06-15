#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		string a, b;
		 
		cin >> n >> m;
		cin >> a >> b;
		int j = 0, k = 0;
		for(int i = 0; i < n; i++){
			while(j < m && a[i] != b[j]){
				j++;
			}
			if(j == m){
				break;
			}
			else{
				k++;
				j += 1;
			}
		}
		cout << k <<"\n";
	}
}