#include<stdio.h>
void main(){
	int n;
	printf("Enter a number : \n");
	scanf("%d",&n);
	if(n%2==0){
		printf("Last digit of number %d is Even",n%10);
		}
	else {
	printf("Last digit of number %d is odd",n%10);
		}
	}