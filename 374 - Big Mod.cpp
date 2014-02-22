#include <stdio.h>
int main(){
    long long t,a,p,m,r;
    while(scanf("%lld %lld %lld",&a,&p,&m) == 3){
        r = 1;
        while(p){
            if(p%2)
				r = (r*a)%m;
            a = (a*a)%m;
            p = p/2;
        }
        printf("%lld\n",r);
    }
    return 0;
}
