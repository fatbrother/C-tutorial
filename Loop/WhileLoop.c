#include <stdio.h>

int main(void) {
    int score = 0; 
    int sum = 0; 
    int cnt = -1; 

    while(score != -1) { 
        cnt++; 
        sum += score; 
        printf("Enter -1 to End the program");
        scanf("%d", &score);
    } 

    // for (cnt = 0; score != -1; cnt++) {
    //     sum += score; 
    //     printf("Enter -1 to End the program");
    //     scanf("%d", &score);
    // }

    printf("Average: %f\n", (float)sum / cnt); 

    return 0;
}