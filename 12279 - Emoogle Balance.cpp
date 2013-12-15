#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector <int> ary;
	int n,input,i,j,count1,count2;
	j = 1;
	while(1){
		cin >> n;
		if(n == 0) break;
		count1 = count2 = 0;
		for(i = 0; i < n; i++){
			cin >> input;
			ary.push_back(input);
			if(input == 0) count1++;
			else count2++;
		}
		int res = count2 - count1;
		cout << "Case " << j << ": " << res << endl;
		j++;
	}
	return 0;
}
