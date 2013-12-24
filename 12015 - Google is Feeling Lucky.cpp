#include <iostream>
#include <string>
using namespace std;
int main(){
	char str[10][1001];
	int i,j,num,max,value,ary[10];
	cin >> num;
	for(i = 0; i < num; i++){
		max = 0;
		for(j = 0; j < 10; j++){
			cin >> str[j] >> value;
			ary[j] = value;
			if(value > max) 
				max = value;
		}
		cout << "Case #" << i+1 << ":" << endl;
		for(j = 0; j < 10; j++){
			if(ary[j] == max)
				cout << str[j] << endl;
		}
	}
	return 0;
}
