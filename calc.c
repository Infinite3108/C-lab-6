#include<stdio.h>
void main(){
	float a,b;
	char c;
	printf("Enter your operation in form of\nnum1 operator num2 :\n");
	scanf("%f %c %f",&a, &c, &b);
	if(c=='/'&&b==0){
	printf("Mathematical ERROR!! you can't divide anything with 0.\n");	
	} 
	else {	
	switch(c){
		case '+':
		printf("%.2f %c %.2f = %.2f\n",a,c,b,a+b);
		break;
		case '-':
		printf("%.2f %c %.2f = %.2f\n",a,c,b,a-b);
		break;
		case '*':
		printf("%.2f %c %.2f = %.2f\n",a,c,b,a*b);
		break;
		case '/':
		printf("%.2f %c %.2f = %.2f\n",a,c,b,a/b);
		break;
		default:
		printf("Enter valid operator!!!\n");
		break;
		}
	}
	}