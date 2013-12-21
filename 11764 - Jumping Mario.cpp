#include <iostream>
using namespace std;
int main(){
	int cs,st,jump[50],hi,lo,i,j;
	cin >> cs;
	for(j = 1; j <= cs; j++){
		cin >> st;
		hi = lo = 0;
		for(i = 0; i < st; i++)
			cin >> jump[i];
		for(i = 0; i < st-1; i++){
			if(jump[i] < jump[i+1]) hi++;
			else if(jump[i] > jump[i+1]) lo++;
		}
		cout << "Case " << j << ": " << hi << " " << lo << endl;
	}
	return 0;
}
