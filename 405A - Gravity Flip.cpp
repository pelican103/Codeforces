#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int n,temp;
	cin >> n;
	int A[n];
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n - i -1; j++){
		
			if(A[j] > A[j+1]){
				temp = A[j+1];
				A[j+1] = A[j];
				A[j] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << A[i];
	}
}
