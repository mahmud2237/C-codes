/*
Challenge: Assign Value to double and char Variables

Problem Description: Create a program to assign values to double and char variables. 
Create a double variable named number with value 86.99.
Create a character variable named letter with value 'z'.
Print both variables with two spaces between them.

Example & Expected Output: 86.990000  z
*/

#include <stdio.h>

int main() {

    // create double and character variables
    double n1;
    n1 = 86.99;
    char n2;
    n2 = 'z';

    // print variables
    printf("%lf  ", n1);
    printf("%c", n2);

    return 0;
}