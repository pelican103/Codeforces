#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		
		
		if(s[0] == '1' && (s[1] != '0' && s[1] != '1' && s[1] != '2')){
			s[1] = s[1] - 2;
			s[0] = '0';
			cout << s << ' ' << "PM" << "\n";
		}
		
		else if(s[0] == '1' && s[1] == '2'){
			cout << s << ' ' << "PM" << "\n";
		}
		
		else if(s[0] == '0' && s[1] == '0'){
			s[0] = '1';
			s[1] = '2';
			cout << s << ' ' << "AM" << "\n";
		}
		
		else if(s[0] == '2' && s[1] == '0'){
			s[0] = '0';
			s[1] = '8';
			cout << s << ' ' << "PM" << "\n";
		}
		
		else if(s[0] == '2' && s[1] == '1'){
			s[0] = '0';
			s[1] = s[1] + 8;
			cout << s << ' ' << "PM" << "\n";
		}
		
		else if(s[0] == '2' && s[1] == '2'){
			s[0] = '1';
			s[1] = '0';
			cout << s << ' ' << "PM" << "\n";
		}
		
		else if(s[0] == '2' && s[1] == '3'){
			s[0] = '1';
			s[1] = '1';
			cout << s << ' ' << "PM" << "\n";
		}
		
		else{
			cout << s << " " << "AM" << "\n";
		}
	}
}