#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main(){
	int n,m,a,b, money=0;
	cin >> n >> m >> a >> b;

 //No need for b type of ticket if m*a <= b
	if(m*a <= b){
		cout << n * a;
	}
	else{
		if((n%m) * a > b){
		money = (n/m) * b + b;
	}
		else{
		money = (n/m)*b + (n%m) * a;	
	}
	
	cout << money;
	}
	
}
