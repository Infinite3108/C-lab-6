#include<stdio.h>
void main(){
int num=5;
float total=0;
float totalm;
float percent;
int fail=0;
float initial;

printf("Make your exam result!!\n");
printf("Enter maximum marks of subjects : \n");
scanf("%f",&totalm);
initial=totalm*0.4;
for(int i=0;i<num;i++) {
	char sub[15];
	float mark;
		printf("Enter subject name : \n");	
		scanf("%s",&sub);
		printf("Enter marks in subject : \n");
		scanf("%f",&mark);
	if(mark<=initial) {
	fail+=1;	
		}
		total+=mark;
	}
	percent=(total/num);
    printf("You got %f %.\n",percent);
    if(percent<40){
    printf("So sad!! you failed!!\n");
    printf("Grade: FAIL  \n");  	
    	}
	else if(fail>0){
	printf("So sad!! you failed in %d subject(s). \n",fail);
	printf("Grade: FAIL  \n");	
	}
	else {
	printf("Congrats!!! You passed all subjects !!!");	
	if(percent<60){
		printf("Grade: second class  \n");  
		}
	else if(percent<79){
		printf("Grade: first class  \n");  
		}
	else {
		printf("Grade: Distinction  \n");  
		}
		}
	
}