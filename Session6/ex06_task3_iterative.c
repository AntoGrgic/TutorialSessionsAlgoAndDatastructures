#include <stdio.h>
#include <stdlib.h>
#define N 10

struct node {
    int key;
    struct node* next;
};

struct node* convertArraytoLinkedList(int *arr, int n);  // convert a given array to a linked list

void print(struct node* curr); // a printing function

struct node* reverseLinkedList(struct node* head);  // wrapper function of the recursive

struct node* reverse(struct node* prev, struct node* curr);  // the recursive

struct node* convertArraytoLinkedList(int *arr, int n) {
    struct node* head;
    head = malloc(sizeof(struct node));
    head->key = *(arr);

    struct node* curr = head;
    for (int i = 1; i < n; i++) {
        curr->next = malloc(sizeof(struct node));
        curr = curr->next;
        curr->key = arr[i];
        curr->next = NULL;
    }
    return head;
}

struct node* reverseLinkedList(struct node* head) {
    struct node* prev = NULL;
    struct node* curr = head;
    struct node* next = NULL; 

    while (curr != NULL) {
        next = curr ->next;               // save next
        curr->next = prev;                // reverse the link
        prev = curr;                      // move prev forward
        curr = next;                      // move curr forward
    }

    return prev;  // prev is now the new head
}

void print(struct node* curr) {
    while (curr != NULL) {
        printf("%d ", curr->key);
        curr = curr->next;
    }
}

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
    
    return 0;   
}