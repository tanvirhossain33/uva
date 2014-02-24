#include <iostream>
using namespace std;
int main(){
	double H,u,d,F,flag;
	while(cin >> H >> u >> d >> F){
		if(!H) break;
		double mul=u*(F/100),sum =0,U=u,D=d;
		int count = 0;
		while(1){
			count++;
			sum += U;
			if(sum > H){
				flag = 1;
				break;
			}
			sum -= D;
			if(sum < 0 ){
				flag = 0;
				break;
			}
			U -= mul;
			if(U < 0) U = 0;
		}
		if(flag)
			cout << "success on day " << count << endl;
		else 
			cout << "failure on day " << count << endl;
	}
	return 0;
}
