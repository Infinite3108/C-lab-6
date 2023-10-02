#include<stdio.h>
void main(){
	char c,C;
	printf("Enter any number, alphabet or special character and i'll return type of it.\n");	
	scanf("%c",&c);
	C=(int)c;
	if((C<65 && (C>57 || C<48)) || (C>90 && C<97) || (C>122)){
		printf("Character %c is a symbol/sign\n");
		}
	else if(C>=48 && C<=57){
		printf("Character %c is a number.\n");
		}
	else if(C>=65 && C<=90){
		printf("Character %c is a Uppercase alphabet.\n");
		}
	else if(C>=97 && C<=122){
		printf("Character %c is a lowercase alphabet.\n",c);
		}
	}