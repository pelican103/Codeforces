#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	
	int a,n, k,count=0;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a;
		
		if(a <= (5-k)){
			count++;
		}
		
	}
	cout << count/3 << "\n";
}
