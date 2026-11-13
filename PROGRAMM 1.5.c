//User defined function

#include<stdio.h>

//function prototype
int addition(int x, int y);

void main(){
	int result, num1, num2;
	
	printf("Enter two  number: ");
	scanf("%d%d", &num1, &num2);
	
	result = addition(num1,num2);
	
	printf("Result is %d", result);
		
}

//Function defination
int addition(int x, int y) {
	int z;
	z = x + y;
	return z;
}