// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODEPTR;
NODEPTR *start=NULL,*tptr,*shadow ,*newnode;

void insertList(int num){
    newnode=(NODEPTR*)malloc(sizeof(NODEPTR));
    newnode->data=num;
    newnode->next=NULL;
    for(tptr=start;tptr;shadow=tptr,tptr=tptr->next);
    
    if(start==tptr){
        newnode->next = start;
        start=newnode;
        
    }else
    {
        newnode->next=shadow->next;
        shadow->next=newnode;
    }
}
void displayList(){
    for(tptr=start;tptr;tptr=tptr->next)
    printf("%d ",tptr->data);
}

int searchList(int num){
    int i=0;
    for(tptr=start;tptr;tptr=tptr->next)
    {
        if(tptr->data==num)
            return i;
        i++;
    }
    return -1;
}
void deleteListfromFront(){
     if (start == NULL) {
        printf("List is already empty.\n");
        return;
    }

    tptr = start; 
    start = start->next;     
    free(tptr);               
}
void deleteFromPos(int pos){
    int i=0;
    
    while(i!=pos&&tptr)
}

int main() {
    // Write C code here
    int num;

    for(int i=0;i<4;i++){
        scanf("%d",&num);
        insertList(num);
    }
    displayList();
    
    int search = searchList(9);
    printf("\nPosition = %d\n",search);
    
    deleteList();
    displayList();
    return 0;
}
