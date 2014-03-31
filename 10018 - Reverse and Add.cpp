#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
void findResult(char ary[]);
int findPalin(char ary[]);
void findRev(char num1[]);
void big_integer_addition(char num1[], char num2[]);
char num1[1000],num2[1000];
int count;
int main(){
	char ary[1000];
	int test;
	cin >> test;
	while(test--){
		cin >> ary;
		count = 0;
		findResult(ary);
	}
	return 0;
}
void findResult(char ary[]){
	int temp;
	temp = findPalin(ary);
	if(temp == 1){
		cout << count << " " << ary << endl;
		for(int i = 0; num1[i]; i++)
			num1[i] = NULL;
		for(int i = 0; num2[i]; i++)
			num2[i] = NULL;
	}
	else if(temp == 0){
		count++;
		findRev(ary);
	}
}
int findPalin(char ary[]){
	int len = strlen(ary);
	for(int i = 0, j = len-1; i < j; i++,j--){
		if(ary[i] != ary[j])
			return 0;
	}
	return 1;
}
void findRev(char num1[]){
	int len = strlen(num1);
	for(int i = 0,j = len-1; j >= 0; i++,j--){
		num2[i] = num1[j];
	}
	big_integer_addition(num1,num2);
}
void big_integer_addition(char num1[], char num2[]){
	int i,j,carry,sum;
	int len1,len2;
	char result[1000];
	len1 = strlen(num1);
	len2 = strlen(num2);
	for(i = 0,j = len1-1; i < j; i++,j--){
		char temp = num1[i];
		num1[i] = num1[j];
		num1[j] = temp;
	}

	for(i = 0,j = len2-1; i < j; i++,j--){
		char temp = num2[i];
		num2[i] = num2[j];
		num2[j] = temp;
	}

	if(len1 < len2){
		for(i = 0; i < len2 - len1; i++)
			num1[len1 + i] = '0';
		num1[len1 + i] = NULL;
	}
	else if(len1 > len2){
		for(i = 0; i < len1 - len2; i++)
			num2[len2 + i] = '0';
		num2[len2 + i] = NULL;
	}
	i = carry = 0;
	while(num1[i]){
		sum = (num1[i] - 48) + (num2[i] - 48) + carry;
		result[i] = (sum % 10) + 48;
		carry = sum / 10;
		i++;
	}
	if(carry == 1){
		result[i] = carry + 48;
		i++;
	}
	result[i] = NULL;
	int len3 = strlen(result);
	for(i = 0,j = len3-1; i < j; i++,j--){
		char temp = result[i];
		result[i] = result[j];
		result[j] = temp;
	}
	findResult(result);
}
