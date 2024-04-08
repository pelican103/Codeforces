#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	
	int A, B, ans=1;
	cin >> A >> B;
	
	for(int i = 1; i <= min(A,B); i++){
		ans = i * ans;
	}
	cout << ans;
}
