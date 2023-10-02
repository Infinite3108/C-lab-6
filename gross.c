#include<stdio.h>
void main() {
	float salary;
	float hra;
	float da;
	float gross;	
	printf("Enter your Basic salary to get Gross salary  (in Rs.) : \n");
	scanf("%f",&salary);
	if(salary>=30000){
		hra=0.3*salary;
		da=0.95*salary;
		}
	else if(salary>=20000){
		hra=0.25*salary;
		da=0.9*salary;
		}	
		else if(salary>=10000){
		hra=0.2*salary;
		da=0.8*salary;
		}
		else {
			hra=da=0;
			}
	gross=salary+hra+da;
	printf("Gross salary for %.2f salary is %.2f.",salary,gross);
	}