#include <stdio.h>
int main(){
	int i,j,line,ary[3],max,min;
	scanf("%d", &line);
	for(i =  1; i <= line; i++){
		for(j = 0; j < 3; j++)
			scanf("%d", &ary[j]);
		max = ary[0];
		for(j = 1; j < 3; j++){
			if(ary[j] > max)
				max = ary[j];
		}
		min = ary[0];
		for(j = 1; j < 3; j++){
			if(ary[j] < min)
				min = ary[j];
		}
		for(j = 0; j < 3; j++){
			if(ary[j] != max && ary[j] != min){
				printf("Case %d: %d\n", i,ary[j]);
				break;
			}
		}
	}
	return 0;
}
