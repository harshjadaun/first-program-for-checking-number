#include <stdio.h>
int main(void) {
	// your code goes here
	int i,N,K,arr[100],sum=0;
	scanf("%d%d",&N,&K);
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<K;i++){
		sum+=arr[i];
	}
	printf("%d",sum);
	return 0;
}
