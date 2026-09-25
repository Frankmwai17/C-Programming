// Variables and Data types

#include <stdio.h>

int main () {
	//Declare and Initialize variables 
	char name [7] = ("FRANK"); //%s
	char grade = 'B'; //%c
	int age = 21; //%d
	float marks = 53; //%f
	double pi = 3.1422; //%lf
	
	printf("My name is %s \n", name);
	printf("I got a mean grade %c \n", grade);
	printf("I am %d years old \n", age);
	printf("I scored %.2f marks in KCSE \n", marks);
	printf("The value of pi is %lf \n", pi);
	
	
	return 0;
}