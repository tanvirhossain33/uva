#include<stdio.h>
int main(){
	long long a,b,c,d,i;
	c = 1;
	while(scanf("%lld %lld",&a,&b)){
		if(a<0 && b<0)
			break;
		d = a;
		for(i = 1; i != 0; i++){
			if(a == 1)
				break;
			if(a%2 == 0)
				a = a/2;
			else
				a = a*3 + 1;
			if(a > b)
				break;
	    }
		printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", c,d,b,i);
		c++;
	}
	return 0;
}
