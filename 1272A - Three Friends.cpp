#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int calc(int a, int b, int c){
	return abs(a-b) + abs(a-c) + abs(b-c);	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c, ans=0;
		cin >> a >> b >> c;
		
		ans = calc(a,b,c);
		
		for(int na = -1; na < 2; na++){
			for(int nb = -1; nb < 2; nb++){
				for(int nc = -1; nc < 2; nc++){
					int da = a + na;
					int db = b+ nb;
					int dc = c + nc;
					
					ans = min(ans, calc(da,db,dc));
				}
			}
		}
		cout << ans << "\n";
	}
}