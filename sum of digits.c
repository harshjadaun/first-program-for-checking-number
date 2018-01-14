#include <stdio.h>
int main(void) {
	// your code goes here
	int n,d=0;
  scanf("%d",&n);
	while(n!=0){
		d=d+1;
		n=n/10;
	}
	printf("%d",d);
	return 0;
}
