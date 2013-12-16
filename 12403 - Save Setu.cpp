#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
	int line,k,count;
	string str;
	cin >> line;
	getchar();
	count = 0;
	while(line--){
		cin >> str;
		getchar();
		if(str=="donate"){
			cin >> k;
			count = count + k;
			getchar();
		}
		else if(str == "report")
			cout << count << endl;
	}
	return 0;
}
		
