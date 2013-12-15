#include <stdio.h>
#include <string.h>
int main(){
	char ary1[200],ary2[200];
	int i,j,n,len1,len2,stroke,happy;
	while(1){
		scanf("%d\n", &n);
		if(n == -1)
			break;
		scanf("%s\n%s", ary1,ary2);
		stroke = happy = 0;
		len1 = strlen(ary1);
		len2 = strlen(ary2);
		for(i = 0; i < len2; i++){
			int flag = 0;
			for(j = 0; j < len1; j++){
				if(ary1[j] == ary2[i]){
					ary1[j] = 0;
					flag = 1;
					happy++;
				}
			}
			if(!flag)
				stroke++;
			if(stroke == 7 || happy == len1)
				break;
		}
		printf("Round %d\n",n);
		if(stroke == 7)
			puts("You lose.");
		else if(happy == len1)
			puts("You win.");
		else
			puts("You chickened out.");
	}
	return 0;
}
