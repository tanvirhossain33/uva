#include <stdio.h>
int  main(){
	int v,t,c;
	while((scanf("%d %d", &v,&t)) != EOF)
    {
		c = (v*t) * 2;
		printf("%d\n",c);
    }
return 0;
}
