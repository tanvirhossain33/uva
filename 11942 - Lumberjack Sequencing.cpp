#include <iostream>
using namespace std;
int main(){
	int line,temp,i,j,num[20][10];

	cin >> line;
	for(i = 0; i < line; i++){
		for(j = 0; j < 10; j++){
			cin >> num[i][j];
		}
	}
	temp = 0;
	cout << "Lumberjacks:" << endl;
	for(i = 0; i < line; i++){
		for(j = 0; j < 10-1; j++){
			if(num[i][j] <= num[i][j+1] )
				temp = 1;
			else{
				temp = 0;
				break;
			}
		}
		if(temp != 1){
			for(j = 0; j < 10-1; j++){
				if(num[i][j] > num[i][j+1])
					temp = 1;
				else{
					temp = 0;
					break;
				}
			}
		}
		if( temp == 1) cout << "Ordered" << endl;
		else cout << "Unordered" << endl;
	}
	return 0;
}
