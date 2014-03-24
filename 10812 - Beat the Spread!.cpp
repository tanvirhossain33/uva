#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
	int test,sum,diff,res,final,check;
	cin >> test;
	while(test--){
		cin >> sum >> diff;
		if(sum < diff)
			cout << "impossible" << endl;
		else{
			res = (sum + diff) / 2;
			final = sum - res;
			check = abs(res-final);
			if(check != diff)
				cout << "impossible" << endl;
			else cout << res << " " << final << endl;
		}
	}
	return 0;
}
