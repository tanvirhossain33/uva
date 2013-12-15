#include <stdio.h>
int main(){
	char ch[10000];
	long int i,count = 0;
	while(gets(ch)){
		for(i = 0; ch[i]; i++){
			if(ch[i] == '"'){
				count++;
				if(count%2 == 1)
					printf("``");
				else if(count%2 == 0)
					printf("''");
			}
			else 
				printf("%c", ch[i]);
		}
		printf("\n");
	}
	return 0;
}
