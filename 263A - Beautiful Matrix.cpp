#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int x, y;
	int A[5][5];
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> A[i][j];
			if(A[i][j] == 1){
				x = i;
				y = j;
			}
		}	
	}
	cout << abs(2-x) + abs(2-y) << "\n";
}