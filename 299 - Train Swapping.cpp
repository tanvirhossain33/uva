#include <iostream>
using namespace std;
int num;
int main(){
	int line,count,ary[1000];
	int i,j;
	cin >> line;
	while(line--){
		cin >> num;
		for(i = 0; i < num; i++)
			cin >> ary[i];
		count = 0;
		for(i = 0; i < num; i++){
			for(j = 1; j < num; j++){
				if(ary[j] < ary[j-1]){
					int temp = ary[j];
					ary[j] = ary[j-1];
					ary[j-1] = temp;
					count++;
				}
			}
		}
		cout << "Optimal train swapping takes " << count << " swaps." << endl;
	}
	return 0;
}
