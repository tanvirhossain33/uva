#include <iostream>
#include <map>
#include <string>
#include <cstdio>
using namespace std;
int main(){
	 map <string,string> str;
	 map <string,string> :: iterator ite;
	 string ary1,ary2;
	 int num;
	 cin >> num;
	 getchar();
	 while(num--){
		 getline(cin,ary1);
		 getline(cin,ary2);
		 str[ary1] = ary2;
	 }
	 cin >> num;
	 getchar();
	 while(num--){
		getline(cin,ary1);
		ite = str.begin();	
		while(ite != str.end()){
			if(ite -> first == ary1){
				cout << ite->second << endl;
				break;
			}
			else if(ite -> second == ary1){
				cout << ite -> first << endl;
				break;
			}
			ite++;
		}
	 }
	 return 0;
}
