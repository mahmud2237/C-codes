/*
Problem Description:
Create a program to print the variable. Create two variables number1 with value 34 and number2 with value 78.32. Print number1 and number2 with a space in between.

Example & Expected Output: 34 78.320000

Solution Below:  
*/
#include <stdio.h>

int main() {
  
    // create integer variable
    int num1;
    num1= 34;
    // create double variable
    double num2;
    num2= 78.32;
    // print variables
    printf("%d ", num1);
    printf("%lf\n", num2);

    return 0;
 }