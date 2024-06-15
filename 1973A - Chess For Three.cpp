#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int p1, p2, p3, sum;
		cin >> p1 >> p2 >> p3;
		sum = p1 + p2 + p3;
		if(sum % 2 != 0){
			cout << -1 << "\n";
		}
		else{
			cout << min(p1+p2, (p1+p2+p3)/2) << "\n";
		}
	}
}