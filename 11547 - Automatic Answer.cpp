#include <stdio.h>
int main(){
	int i,line,res,final,count;
	scanf("%d", &line);
	for(i = 0; i < line; i++){
		scanf("%d", &res);
		res = ((235*(((res*567)/9)+7492))/47)-498;
		count = 0;
		while(1){
			final = res%10;
			res = res/10;
			count++;
			if(count == 2)
				break;
		}
		if(final < 0)
			final = final * (-1);
		printf("%d\n", final);
	}
	return 0;
}
