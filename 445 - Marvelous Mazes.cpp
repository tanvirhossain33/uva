#include <stdio.h>
int main(){
	char ary[100000];
	int i,j,sum = 0;
	while(gets(ary)){
		for(i = 0; ary[i]; i++){
			if(ary[i] >= '1' && ary[i] <= '9')
				sum = sum + (ary[i] - '0');
			else if(ary[i] == 'b'){
				for(j = 0; j < sum; j++)
					printf(" ");
				sum = 0;
			}
			else if(ary[i] == '!'){
				printf("\n");
				sum = 0;
			}
			else{
				for(j = 1; j <= sum; j++)
					printf("%c", ary[i]);
				sum = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
