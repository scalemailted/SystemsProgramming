// self_referential_structures.c
#include <stdio.h>

struct node {
    int data;
    struct node *next;
};

void printList(struct node *n) {
    int count = 0;
    while (n != NULL) {
        printf("Node %d: %d ", ++count, n->data);
        n = n->next;
    }
    printf("\n");
}

int main() {
    struct node node1 = {100, NULL};
    struct node node2 = {200, NULL};
    node1.next = &node2;

    printList(&node1);

    return 0;
}
