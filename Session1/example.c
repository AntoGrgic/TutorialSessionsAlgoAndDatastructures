#include <stdio.h>
#define N 5

int counter;        //ASSIGN VALUE             

int main(){         //MAIN FUNCTION
    counter = add(2, 3);

    printf("%d\n", counter);

    greet();

    return 0;
}

int add(int a, int b){      //DEFINE FUNCTION
    return a + b;
}

void greet(){    
    printf("Hello!\n");
}



char str[] = "Hello";


char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};



#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, 50, stdin);

    printf("You entered: %s", name);

    return 0;
}







int factorial(int n) {
    if (n == 0) return 1;        // base case
    return n * factorial(n - 1); // body + recursive call
}

int 

1 + r + r² + ... + rⁿ = (1 - rⁿ⁺¹) / (1 - r)