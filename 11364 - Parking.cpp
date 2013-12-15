#include <stdio.h>
int main(){
	int line,n,ary[10000],res,max,min,i;
	scanf("%d", &line);
	while(line--){
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%d", &ary[i]);
		max = ary[0];
		for(i = 1; i < n; i++){
			if(ary[i] > max)
				max = ary[i];
		}
		min = ary[0];
		for(i = 1; i < n; i++){
			if(ary[i] < min)
				min = ary[i];
		}
		res = (max - min)*2;
		printf("%d\n", res);
	}
	return 0;
}
