#include<stdio.h>
void main() {
	// your code goes here
	int year;
	scanf("%d",&year);
	if((year%4==0 && year%100!=0)||(year%400==0)){
		printf("yes");
	}
	else{
		printf("no");
	}
}
 
