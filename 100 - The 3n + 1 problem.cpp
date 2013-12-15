#include <stdio.h>
int main(){
	int i,j,m,n,count,max;
	while(scanf("%d %d", &n,&m) == 2){
		max = 0;
		printf("%d %d", n,m);
		if(n > m){
			int temp = m;
			m = n;
			n = temp;
		}
		for(i = n; i <= m; i++){
			count = 1;
			j = i;
			while(j > 1){
				if(j % 2 == 0)
					j = j / 2;
				else 
					j = (3*j) + 1;
				count++;
			}
			if(count > max)
				max = count;
		}
		printf("% d\n", max);
	}
	return 0;
}
