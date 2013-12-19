#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N,B,H,W,P,ans,cap,X;
    while(cin >> N >> B >> H >> W){
        ans = B + 1;
        for(int i = 0;i < H; i++){
            cin >> P;
            cap = 0;
            for(int j = 0;j < W; j++){
                cin >> X;
                cap = max(cap,X);
            }
			if(cap >= N)
				ans = min(ans,N * P);
        }
        if(B+1 > ans)
			cout << ans << endl;
		else cout << "stay home" << endl;
    }
    return 0;
}
