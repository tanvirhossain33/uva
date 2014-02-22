#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	char str[1000000];
	int A,B,num,count = 1;
	while(scanf("%s", str) == 1 && strlen(str) != 0){
		scanf("%d", &num);
		printf("Case %d:\n", count);
		count++;
		while(num--){
			
			scanf("%d %d", &A,&B);
			if(A > B)
				swap(A,B);
			while(A < B){
				if(str[A+1] != str[A])
					break;
				A++;
			}
			if(A == B) printf("Yes\n");
			else printf("No\n");
		}
	}
}
