#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int N,Q,A[50000],B[25000];
	int i,num1,num2;
	int count = 3;
	scanf("%d", &N);
	for(i = 0; i < N; i++)
		scanf("%d", &A[i]);
	scanf("%d", &Q);
	for(i = 0; i < Q; i++)
		scanf("%d", &B[i]);
	for(i = 0; i < Q; i++){
		num1 = lower_bound(A, A+N, B[i]) - A;
		num2 = upper_bound(A, A+N, B[i]) - A;
		num1 = num1-1;
		if(num1 < 0)
			printf("X");
		else printf("%d", A[num1]);
		if(N == num2)
			printf(" X\n");
		else printf(" %d\n", A[num2]);
	}
	return 0;
}
