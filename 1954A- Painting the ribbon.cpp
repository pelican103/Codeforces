#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		float n,m,k;
		cin >> n >> m >> k;
		
		/*Alice must ensure at most n-k-1 parts of a certain color to prevent
		Bob from repainting whole ribbon into 1 colour. 
		2 ways: 
		Calculate the maximum possible length of ribbon such that it contains no 
		more than n-k-1 parts of every color
		OR
		(Method shown)
		Calculate the maximum number of parts among all colours if you try to 
		colour ribbon as even as possible. */
		 		
		float max_colour = ceil(n/m);
		if (max_colour + k >= n){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}