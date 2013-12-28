#include <stdio.h>
int main(){
	char str1[200][200],str2[200][200] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
	int i,j,k,p,count1,count2,num;
	count1 = count2 = 0;
	scanf("%d\n", &num);
	for(i = 0; i < num; i++)
		scanf("%s", &str1[i]);
	if(num <= 16) p = 16; else if(num <= 16*2) p = 16*2; else if(num <= 16*3) p = 16*3;
	else if(num <= 16*4) p = 16*4; else if(num <= 16*5) p = 16*5;
	else if(num <= 16*6) p = 16*6; else p = 16*7;
	for(i = 0,j = 0,k = 0; k < p; i++,j++,k++){
		printf("%s: %s\n", str1[j],str2[i]);
		count1++; count2++;
		if(count1 == num){
			j = -1;
			count1 = 0;
		}
		if(count2 == 16){
			i = -1;
			count2 = 0;
		}
	}
	return 0;
}
