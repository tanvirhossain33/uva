#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int line,N,ary[10000],sum,count,avg;
	float res;
	cin >> line;
	while(line--){
		cin >> N;
		sum = 0;
		count = 0;
		for(int i = 0; i < N; i++)
			cin >> ary[i];
		for(int i = 0; i < N; i++)
			sum += ary[i];
		avg = sum/N;
		for(int i = 0; i < N; i++){
			if(ary[i] > avg)
				count++;
		}
		res = ((float)count/(float)N) * 100;
		printf("%.3f%%\n", res);
	}
	return 0;
}
