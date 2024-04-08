#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	string x;
	cin>>x;
	int i = 0;
	if(x[i] == '9'){
		i++;
	}
	while(i < x.length()){
		if(x[i] >= '5'){
			x[i] = ('9' - x[i]) + '0';
		}
		i++;
	}
	cout << x;
}
