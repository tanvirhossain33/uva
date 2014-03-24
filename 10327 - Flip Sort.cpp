#include <iostream>
using namespace std;
int main(){
	int num,ary[1000],i,j,count,temp;
	while(cin >> num){
		for(i = 0; i < num; i++)
			cin >> ary[i];
		count = 0;
		for(i = 0; i < num; i++){
			for(j = 1; j < num; j++){
				if(ary[j-1] > ary[j]){
					temp = ary[j];
					ary[j] = ary[j-1];
					ary[j-1] = temp;
					count++;
				}
			}
		}
		cout << "Minimum exchange operations : " << count << endl;
	}
	return 0;
}
