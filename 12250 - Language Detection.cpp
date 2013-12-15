#include <stdio.h>
#include <string.h>
int main(){
	char ary[20];
	int i=1;
	while(gets(ary)){
		if(strcmp(ary,"#") == 0)
			break;
		if(strcmp(ary,"HELLO") == 0)
			printf("Case %d: ENGLISH\n", i);
		else if(strcmp(ary,"HOLA") == 0)
			printf("Case %d: SPANISH\n", i);
		else if(strcmp(ary,"HALLO") == 0)
			printf("Case %d: GERMAN\n", i);
		else if(strcmp(ary,"BONJOUR") == 0)
			printf("Case %d: FRENCH\n", i);
		else if(strcmp(ary,"CIAO") == 0)
			printf("Case %d: ITALIAN\n", i);
		else if(strcmp(ary,"ZDRAVSTVUJTE") == 0)
			printf("Case %d: RUSSIAN\n", i);
		else
			printf("Case %d: UNKNOWN\n", i);
		i++;
	}
	return 0;
}
