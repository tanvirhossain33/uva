#include <iostream>
using namespace std;
int main(){
	int num,line,A,B,temp,i,D;
	cin >> num;
	while(num--){
		cin >> line;
		temp = 1;
		cin >> A >> B;
		D = A-B;
		for(i = 0; i < line-1; i++){
			cin >> A >> B;
			if(D != A-B)
				temp = 0;
		}
		if(temp)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
		if(num) cout << "\n";
	}
	return 0;
}
