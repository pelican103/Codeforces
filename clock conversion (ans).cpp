#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int h,m;
		char c;
		cin >> h >> c >> m;
		string am = (h < 12 ? "AM" : "PM");
		h = (h % 12 ? h % 12 : 12);
		cout << (h < 10 ? "0": "") << h << c << (m<10? "0" : "") << m << " " << am << "\n";
	}
}