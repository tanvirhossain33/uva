#include <iostream>
using namespace std;
int main(){
	int N,K,count,temp,res,sum;
	while(cin >> N >> K){
		res = 0;
		count = N;
		while(1){
			temp = count % K;
			count = count / K;
			res = res + count;
			count =  count + temp;
			if(count < K) break;
			
		}
		res = res + N;
		cout << res << endl;
	}
	return 0;
}
