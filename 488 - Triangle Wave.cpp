#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int num,Amplitude,Frequency;
	int i,j,k,m;
	while(scanf("%d", &num) == 1){
		for(m = 0; m < num; m++){
			cin >> Amplitude >> Frequency;
			for(k = 0; k < Frequency; k++){
				for(i = 0; i < Amplitude; i++){
					for(j = 0; j < i+1; j++){
						cout << i+1;
					}
					cout << endl;
				}
				for(i = Amplitude; i > 1; i--){
					for(j = i-1; j > 0; j--){
						cout << i-1;
					}
					cout << endl;
				}
				if(m != num-1 || k != Frequency-1) 
					cout << endl;
			}
		}
	}
	return 0;
}
