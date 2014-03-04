#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	long long int N,res,P;
	while(cin >> N){
		if(N < 0) break;
		res = 1 + (N *(N+1))/2; 
		cout << res << endl;
	}
	return 0;
}
