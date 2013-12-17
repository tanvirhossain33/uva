#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	int num,sz;
	
	cin >> num;
	while(num--){
		cin >> str;
		sz = str.size();
		if(str == "1" || str == "4" || str == "78")
			cout << "+" << endl;
		else if(str[sz-1] == '5' && str[sz-2] == '3')
			cout << "-" << endl;
		else if(str[0] == '1' && str[1] == '9' && str[2] == '0')
			cout << "?" << endl;
		else cout << "*" << endl;
	}
	return 0;
}
