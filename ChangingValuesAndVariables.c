/*
Problem Description: Create a program to change the value of a variable.
Create an integer variable number with value 31.
Print the variable.
Change the value of the variable to 99.
Print the variable again with a space before it.

Example & Expected Output: 31 99
*/

//Solution:

#include <stdio.h>

int main() {
    // create and print an integer variable
    int number= 31;
    printf("%d ", number);
    // change the value of variable
    number = 99;

    // print the variable
    printf("%d", number);

    return 0;
}