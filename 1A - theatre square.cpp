#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,m,a;
	
	cin >> n >> m >> a;
	
	unsigned long long value = ceil((double)m/a) * ceil((double) n/a);
	
	cout << value;
	
}