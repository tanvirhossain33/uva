#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long int num, i,j;
	while(1){
		cin >> num;
		if(num == 0) break;
		i = sqrt((double)num);
		j = i*i;
		if(j == num)
			cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}
