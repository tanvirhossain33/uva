#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int A,B,res;
	while(cin >> A >> B){
		if(A == -1 && B == -1)
			break;
		res = abs(A-B);
		if(res >= 50)
			res = 100 - res;
		cout << res << endl;
	}
	return 0;
}
