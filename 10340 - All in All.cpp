#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;
int main(){
	char str1[100000],str2[100000];
	int i,j,len1,len2,count;
	while(cin >> str1 >> str2){
		len1 = strlen(str1);
		len2 = strlen(str2);
		count = 0;
		for(i = 0; str1[i]; i++){
			for(j = 0; str2[j]; j++){
				if(str1[i] == str2[j]){
					count++;
					i++;
				}
			}
			break;
		}
		if(count == len1)
			cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
