#include <iostream>
#include <cstdio>
using namespace std; 
int main(){
	char ary[50];
	int i;
	while(scanf("%s", ary) != EOF){
		for(i = 0; ary[i]; i++){
			if(ary[i] == 'A' || ary[i] == 'B' || ary[i] == 'C')
				cout << "2";
			else if(ary[i] == 'D' || ary[i] == 'E' || ary[i] == 'F')
				cout << "3";
			else if(ary[i] == 'G' || ary[i] == 'H' || ary[i] == 'I')
				cout << "4";
			else if(ary[i] == 'J' || ary[i] == 'K' || ary[i] == 'L')
				cout << "5";
			else if(ary[i] == 'M' || ary[i] == 'N' || ary[i] == 'O')
				cout << "6";
			else if(ary[i] == 'P' || ary[i] == 'Q' || ary[i] == 'R' || ary[i] == 'S')
				cout << "7";
			else if(ary[i] == 'T' || ary[i] == 'U' || ary[i] == 'V')
				cout << "8";
			else if(ary[i] == 'W' || ary[i] == 'X' || ary[i] == 'Y' || ary[i] == 'Z')
				cout << "9";
			else
				cout << ary[i];
		}
		cout << "\n";
	}
	return 0;
}
