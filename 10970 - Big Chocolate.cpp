#include <iostream>
using namespace std;
int main(){
	int M,N,res;
	while(cin >> M >> N){
		res = M*N;
		if(res == 1 || res == 0)
			cout << "0" << endl;
		else{
			res -= 1;
			cout << res << endl;
		}
	}
	return 0;
}
