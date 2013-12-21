#include <iostream>
using namespace std;
int main(){
	int i,cs,N,T,max;
	cin >> cs;
	for(i = 0; i < cs; i++){
		cin >> N;
		max = 0;
		while(N--){
			cin >> T;
			if(T > max)
				max = T;
		}
		cout << "Case " << i+1 << ": " << max << endl;
	}
	return 0;
}
