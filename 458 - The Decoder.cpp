#include <stdio.h>
#include <string.h>
int main()
{
	char str1[1000],str2[1000];
	int i;
	while(gets(str1)){
		for(i = 0; i < strlen(str1); i++){
			str1[i] = str1[i]-7;
			printf("%c", str1[i]);
		}
		printf("\n");
	}
	return 0;
}

