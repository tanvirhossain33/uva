#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int num,ary[1000];
	int i,count,temp,n,sum;
	n = 1;
	while(cin >> num){
		if(num == 0) break;
		for(i = 0; i < num; i++)
			cin >> ary[i];
		sum = 0;
		count = 0;
		for(i = 0; i < num; i++)
			sum = sum + ary[i];
		sum = sum/num;
		while(1){
			sort(ary, ary+num);
			if(ary[0] == ary[num-1]) 
				break;
			temp = sum - ary[0];
			if(ary[num-1] - temp >= sum){
				ary[num-1] = ary[num-1] - temp;
				ary[0] += temp;
				count += temp;
			}
			else{
				temp = ary[num-1] - sum;
				ary[num-1] -= temp;
				ary[0] += temp;
				count += temp;
			}
		}
		cout << "Set #" << n << endl;
		cout << "The minimum number of moves is " << count << "." << endl;
		cout << endl;
		n++;
	}
	return 0;
}
