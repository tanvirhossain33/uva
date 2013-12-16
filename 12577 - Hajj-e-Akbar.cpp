#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main(){
	int i;
	string str;
	i = 0;
	while(getline(cin,str)){
		if(str == "*") break;
		else if(str == "Hajj")
			cout << "Case " << i+1 << ": Hajj-e-Akbar" << endl;
		else if(str == "Umrah")
			cout << "Case " << i+1 << ": Hajj-e-Asghar" << endl;
		i++;
	}
	return 0;
}
