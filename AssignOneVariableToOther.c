/*
Problem Description
Create a program to assign the value of one variable to another.
Create an integer variable named distance with value 135. Print the distance variable.
Create another integer variable named newDistance with value 429.
Assign the newDistance variable to the distance variable.
Print the distance variable again with two spaces before it.

Example & Expected Output: 135  429
*/

//Solution:
#include <stdio.h>

int main() {

    // create and print the distance variable
    int distance = 135;
    printf("%d  ", distance);

    // create the newDistance variable
    int newDistance = 429;

    // assign newDistance to distance and print distance
    distance = newDistance;
    printf("%d", distance);

    return 0;
}

