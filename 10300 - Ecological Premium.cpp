#include <stdio.h>
int main(){
	int cs,line,mul,a,b,c,i,j;
	scanf("%d", &cs);
	for(i = 1; i <= cs; i++){
		mul = 0;
		scanf("%d", &line);
		for(j = 1; j <= line; j++){
			scanf("%d %d %d", &a,&b,&c);
			mul = mul + (a * c);
		}
		printf("%d\n", mul);
	}
	return 0;
}

