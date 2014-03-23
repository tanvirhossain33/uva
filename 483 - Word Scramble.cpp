#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
	char str[100000],ary[100000];
	char *pch;
	int i,j,k,len;
	while(gets(str)){
		pch = strtok(str," ");
		k = 0;
		while(pch != NULL){
			len = strlen(pch);
			for(i = 0,j = len-1; i < len; i++,j--){
				ary[i] = pch[j];
			}
			ary[i] = NULL;
			if(k != 0) printf(" ");
			printf("%s", ary);
			pch = strtok(NULL, " ");
			k++;
		}
		cout << endl;
	}
	return 0;
}
