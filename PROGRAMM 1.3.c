// Variables and Data types

#include <stdio.h>

int main() {
	//Declare
	
	char grade; //%s
	int age; //%d
	char name; //%s
	float marks; //%f
	double pi; //%lf
	
	printf("FILL IN THE REQUIRED INFORMATION \n");
	
    printf("Enter your grade: \t");
	scanf("%c",&grade);
	
	printf("Enter your age: \t");
	scanf("%d",&age);
	
    printf("Enter your name: \t");
	scanf("%s",&name);
	
	printf("Enter your marks: \t");
	scanf("%f",&marks);
	
	printf("Enter the value of pi: \t");
	scanf("%lf",&pi);
	
	
	return 0;
	
}
	