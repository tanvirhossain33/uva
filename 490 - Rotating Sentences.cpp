#include <stdio.h>
#include <string.h>
int main()
{
	char a[101][101];
	int total = 0;
	int i,j;
	for(i = 0; i < 101; i++){
		for(j = 0; j < 101; j++)
			a[i][j] = ' ';
	}
	while(gets(a[total]))
		total++;
	int m = 0;
	int length;
	for(i = 0; i < total; i++){
		length = strlen(a[i]);
		if(length > m)
			m = length;
		a[i][length] = ' ';
	}
	for(i = 0; i < m; i++){
		for(j = total - 1; j >= 0; j--)
			printf("%c", a[j][i]);
		printf("\n");
	}
	return 0;
}
