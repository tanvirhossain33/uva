#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main(){
	int test,num,i,j,res,result;
	int ary[10000];
	cin >> test;
	while(test--){
		int count = 50000000;
		cin >> num;
		for(i = 0; i < num; i++){
			cin >> ary[i];
		}
		sort(ary,ary+num);
		for(j = 0; j < num; j++){
			result = 0;
			for(i = 0; i < num; i++)
				result += abs(ary[j] - ary[i]);
			count = min(result,count);
		}
		cout << count << endl;
	}
	return 0;
}
