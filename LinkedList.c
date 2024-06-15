#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is already empty.\n");
        return;
    }

    struct Node* temp = *head; // Store the head node
    *head = (*head)->next;     // Change head to the next node
    free(temp);                // Free old head
}


int main() {
    struct Node* head = NULL;
    
  int choice,num;
while(1){
printf("1. Enter to create node \n2. Enter to Delete node ");
scanf(switch){
case 1:
  printf("Enter the element \n");
  scanf("%d",&num);
  insertAtBeginning(&head,num);
break;
case 2:
    deleteAtBeginning(&head);
break;
}
    printList(head);

    return 0;
}
