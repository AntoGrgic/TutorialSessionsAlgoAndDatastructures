#include <stdio.h>

void printRec(int n);


int main(){
    printRec(20);
}

void printRec(int n){
    if (n == 0){
        printf("-------------BASE--CASE--------------\n");
        return;
    }

    printf("%d\n", n%2);

    printf("Before recursive call of n = %d\n", n/2);
    printRec(n/2);

    printf("After recursive call of n = %d\n", n/2);

    printf("%d\n", n%2);

    

}