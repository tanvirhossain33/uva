#include <iostream>
using namespace std;
int main(){
    long long int N,R,res;
    int i;
    for(i = 1; i <= 10002; i++){
		cin >> R >> N;
        if(R == 0 && N == 0) break;
        res = (R-1) / N;
        if(res > 26)
			cout << "Case " << i << ": impossible" << endl;
        else cout << "Case " << i << ": " << res << endl;
    }
    return 0;
}
