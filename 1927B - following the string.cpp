#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		int A[n];
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		int count[26] = {0};
		
		string s = "";
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j<26; j++){
				if(count[j] == A[i]){
					count[j]++;
					s += char(97 + j);
					break;
				}
			}
		}
		cout << s << "\n";
	}
	return 0;
}