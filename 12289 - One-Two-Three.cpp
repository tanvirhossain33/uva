#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,sz;
	string str;
	cin >> n;
	while(n--){
		cin >> str;
		sz = str.size();
		if(sz == 5) cout << "3" << endl;
		else{
			if((str[0]=='o' && str[1]=='n') || (str[0]=='o' && str[1]=='e') || (str[1]=='n' && str[2]=='e') || (str[0]=='o' && str[2]=='e') || (str[0]=='o' && str[2]=='n'))
				cout << "1" << endl;
			else cout << "2" << endl;
		}
	}
	return 0;
}
