#include <stdio.h>
int main(){
	int line,a,b;
	scanf("%d", &line);
	for(int i = 0; i < line; i++){
		scanf("%d %d", &a,&b);
		a = a/3;
		b = b/3;
		printf("%d\n", a*b);
	}
	return 0;
}
