#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main(){
	int nb, ng, count=0;
	cin >> nb;

	int boys[nb];
	for(int i = 0; i < nb; i++){
		cin >> boys[i];
	}
	cin >> ng;
	
	int girls[ng];
	for(int i = 0; i < ng; i++){
		cin >> girls[i];
	}
	
	sort(boys, boys+nb);
	sort(girls, girls+ng);
	
	for(int i = 0; i < nb; i++){
		for(int j = 0; j < ng; j++){
			if(abs(boys[i] - girls[j]) <= 1){
				girls[j] = 1000;
				count++;
				break;
			}
		}
	}
	cout << count << "\n";
	
}
