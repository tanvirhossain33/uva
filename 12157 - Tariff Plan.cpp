#include <iostream>
using namespace std;
int main(){
	int i,j,T,N,mile,juice,res1,res2,ary;
	cin >> T;
	for(i = 0; i < T; i++){
		cin >> N;
		mile = juice = 0;
		for(j = 0; j < N; j++){
			cin >> ary;
			res1 = (ary/30) + 1;
			res2 = (ary/60) + 1;
			mile = mile + res1;
			juice = juice + res2;
		}
		mile = mile * 10;
		juice = juice * 15;
		if(mile < juice)
			cout << "Case " << i+1 << ": Mile " << mile << endl;
		else if(mile > juice)
			cout << "Case " << i+1 << ": Juice " << juice << endl;
		else cout << "Case " << i+1 << ": Mile Juice " << juice << endl;
	}
	return 0;
}
