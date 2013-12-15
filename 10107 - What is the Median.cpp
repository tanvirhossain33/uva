#include<stdio.h>
int main(){
    unsigned int a[10000],n;
    int i,j,p,count=0,temp=0;
    for(i=0;i<10000;i++)
    {
        a[i]=2147483647;
    }
	while(scanf("%u",&n)==1)
	{
		count++;
		i=0;
		while(a[i]<n && i<count)
		{
		    i++;
		}
		for(j=count-1;j>i;j--)
		{
		    a[j]=a[j-1];
		}
		a[i]=n;
		if(count%2==0)
			p=(a[count/2]+a[(count/2)-1])/2;
		else
			p=a[count/2];
		printf("%u\n",p);
	}
	return 0;
}

