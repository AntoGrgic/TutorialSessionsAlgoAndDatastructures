#include <stdio.h>
#include <stdlib.h>
#define N 10

struct node {
    int key;
    struct node* next;
};

struct node* convertArraytoLinkedList(int *arr, int n); // (a)

void print(struct node* curr); // (b)

struct node* reverseLinkedList(struct node* head); // (c)

int main() {
    /* Generating an array of N random integers */
    int *arr;
    arr = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        *(arr + i) = rand();
    }

    struct node *head = convertArraytoLinkedList(arr, N);
    
    printf("\nThe original: ");
    print(head);
    
    struct node* newHead = reverseLinkedList(head);

    printf("\nThe reversed: ");
    print(newHead);


    int a = 10;    

    int *b = NULL;    //b is a pointer pointing to nothing

    b = &a;    //b is a pointer adressing a

    *b = 5;    //the value b is adressing is equal to 5 --> a is now equal to 5












// Without guard
void delete(struct node* head) {
    head = head->next;  // lost when function returns
}

// With guard (double pointer)
void delete(struct node** head) {
    *head = **head->next;  // actually modifies the caller's pointer
}


    
    return 1;   
}