#include <stdio.h>

#define N 7

int array[] = {15, 5, 1, 4, 2, 8, 7};


int main() {
    int i, j, tmp;
    printf("Pass 0: ");
    for (j = 0; j < N; j++) {
            printf("%d ", array[j]);
        }
        printf("| ", array[j]);
        printf("\n");


    //MAIN SORT LOOP
    for (i = 0; i < N - 1; i++) {

        for (j = N - 1; j > i; j--) {

            if (array[j] > array[j - 1]) {
                tmp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = tmp;
            }

        }
    //PRINTINF MIDDLE STATES
        printf("Pass %d: ", i + 1);
        for (j = 0; j < N; j++) {
            if(N -(i+1)  == j){
                printf("| ", array[j]);
            } 
            printf("%d ", array[j]);
        }
        printf("\n");
    }





    printf("Pass 7: ");
    printf("| ", array[j]);
    for (j = 0; j < N; j++) {
            printf("%d ", array[j]);
        }
        
        printf("\n");


    return 0;
}
