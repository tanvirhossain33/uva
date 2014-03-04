#include <iostream>
using namespace std;
int find(int N);
int main(){
	int N,res;
	while(cin >> N){
		if(N == 0) break;
		res = find(N);
		cout << "f91(" << N << ") = " << res << endl;
	}
	return 0;
}
int find(int N){
	int res;
	if(N >= 101)
		res = N-10;
	else
		res = find(find(N+11));
		
	return res;
}
