/*
Name: Wnagalwa Alvin
Reg no.: PA106/G/28804/25
Description: 2D array CAT2_Q1.c 
*/
#include <stdio.h>

int main() {
    // i. Definition:
    // An array is a collection of elements of the same data type
    // stored in continuous memory locations.

    // ii. Declare and initialize a 3D array named 'scores'
    // Two 2x2 arrays combined
    int scores[2][2][2] = {
        { {65, 92}, {84, 72} },  // First 2x2 array
        { {35, 70}, {59, 67} }   // Second 2x2 array
    };
	int k;
	int i;
	int j;
	
    // iii. Print elements using nested loops
    for (k = 0; k < 2; k++) {     
        printf("Array %d:\n", k + 1);

        for (i = 0; i < 2; i++) {  // rows
            for (j = 0; j < 2; j++) {  // columns
                printf("%d ", scores[k][i][j]);
            }
            printf("\n");
        }
        printf("\n"); // space between arrays
    }

    return 0;
}
