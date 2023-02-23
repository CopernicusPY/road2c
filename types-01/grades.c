#include <stdio.h>

int main(void) {
    /*
    Multi dimensional arrays
    a[x][y] is an array with x rows and y columns

    Objective: Calculate average grades of 5 students in 2 different subjects
    */

    int grades[2][5];
    float average;
    int i;
    int j;

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;
    
    for (i=0; i < 2; i++) {
        // Loop through each lesson and initialize `average`
        average = 0;
        for (j=0; j < 5; j++) {
            // Loop through each student and add their grades to `average`
            average += grades[i][j];
        }

        // Find the average grades
        average /= 5.0;
        printf("Average marks in subject %d is %.2f\n", i, average);
    }
}