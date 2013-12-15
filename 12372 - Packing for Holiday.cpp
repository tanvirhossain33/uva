#include <iostream>
using namespace std;
int main(){
	int n,L,W,H,i;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> L >> W >> H;
		if(L <= 20 && W <= 20 && H <= 20)
			cout << "Case " << i+1 << ": good" << endl;
		else cout << "Case " << i+1 << ": bad" << endl;
	}
	return 0;
}
