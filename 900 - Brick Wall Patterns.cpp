#include <iostream>
using namespace std;
int main(){
	int i,num,ary[51];
	ary[0] = 1;
	ary[1] = 1;
	for(i = 2; i < 51; i++)
		ary[i] = ary[i-1] + ary[i-2];
	while(cin >> num){
		if(num == 0) break;
		cout << ary[num] << endl;
	}
	return 0;
}
