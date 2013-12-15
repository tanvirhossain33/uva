#include <stdio.h>
#include <string.h>
int main(){
	char num1[1000],num[1000];
	char result[1000],result1[1000] = {'0'};
	while(gets(num)){
		if(strcmp(num,"0") == 0)
			break;
		int i,j;
		for(i = strlen(num)-1,j = 0; i >= 0; i--,j++)
			num1[j] = num[i];
		num1[j] = NULL;
		for(i = strlen(result1)-1,j = 0; i >= 0; i--,j++)
			result[j] = result1[i];
		result[j] = NULL;
		int carry,sum;
		int len1,len2;
		len1 = strlen(num1);
		len2 = strlen(result);
		if(len1 < len2){
			for(i = 0; i < len2 - len1; i++)
				num1[len1 + i] = '0';
			num1[len1 + i] = NULL;
		}
		else if(len1 > len2){
			for(i = 0; i < len1 - len2; i++)
				result[len2 + i] = '0';
			result[len2 + i] = NULL;
		}
 		i = carry = 0;
		while(num1[i]){
			sum = (num1[i] - 48) + (result[i] - 48) + carry;
			result[i] = (sum % 10) + 48;
			carry = sum / 10;
			i++;
		}
		if(carry == 1){
			result[i] = carry + 48;
			i++;
		}
		result[i] = NULL;

		for(i = strlen(result)-1,j = 0; i >= 0; i--,j++)
			result1[j] = result[i];
		result1[j] = NULL;
	}
	puts(result1);
	return 0;
}
