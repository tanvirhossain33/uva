#include <iostream>
using namespace std;
int G(long long num);
int main(){
	long long num,res;

	while(1){
		cin >> num;
		if(num == 0) break;
		res = G(num);
		cout << res << endl;
	}
	return 0;
}
int G(long long num){
	long long sum,count;
	count = 0;
	while(num != 0){
		sum = num % 10;
		num = num / 10;
		count = count + sum;
	}
	if(count > 9) G(count);
	else return count;
}
