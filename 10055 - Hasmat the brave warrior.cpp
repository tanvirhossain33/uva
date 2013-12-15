#include<stdio.h>
long long a,b,c;
int  main()
{
	while((scanf("%lld %lld",&a,&b))!=EOF)
    {
		if(a>b) 
			c = a-b;
        else 
			c = b-a;
        printf("%lld\n",c);
    }
return 0;
}
