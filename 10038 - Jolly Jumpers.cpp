#include <iostream>
#include <algorithm>
using namespace std; 
int main(){
	int ary1[30000],ary2[30000],n,temp;
    while(cin >> n){

        for(int i = 0; i < n; i++)
            cin >> ary1[i];
        for(int i = 1; i < n; i++){
            int count = abs(ary1[i] - ary1[i-1]);
			ary2[i-1] = count;
        }
        temp = 1;
        sort(ary2, ary2 + n-1);
        for(int i = 0; i < n-1; i++){
            if(ary2[i] != (i+1)){
                temp = 0;
                break;
            }
        }
		if(temp) cout << "Jolly" << endl;
		else cout << "Not jolly" << endl;
	}
	return 0;
}
