#include <iostream>
#include <map>
#include <cstdio>
#include <string>
using namespace std;
int main(){
	map <string,string> str;
	string ary1,ary2,ary3;
	while(getline(cin, ary1)){
		if(ary1.length()==0) break;
		ary2.assign(ary1,0,ary1.find(" "));
		ary1.erase(0,ary1.find(" ")+1);
		str[ary1] = ary2;
	}
	while(getline(cin,ary3)){
		if(ary3.length() == 0) break;
		if(str.find(ary3) != str.end())
			cout << str[ary3] << endl;
		else
			cout << "eh" << endl;
	}
	return 0;
}
