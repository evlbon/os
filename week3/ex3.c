//
//Created by Eugene Bondarev
//I tried to make some comment and hope u will enjoy to check my work:)
//
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *pointer;
};

// just constructor function I thought it will be better than write it in the main function
//list begins from index 0
struct Node * createList(){
    struct Node *l1 = malloc(sizeof(struct Node));
    l1->pointer=NULL;
    return l1;
}



//can insert a new element after some existing element(from task)
//also it can insert first element
//head - pointer to first node in the list | v - value | n - index
void insert_node(struct Node *head, int v,int n) {
    struct Node *current = head;

    for(int i=0;i<n;i++){
        current = current->pointer;
        if(current==NULL){
            printf("You can't insert value by index %d",n);
            return;
        }

    }

    if(current->pointer==NULL){
        current->pointer = malloc(sizeof(struct Node));
        current->pointer->value = v;
        current->pointer->pointer = NULL;
    }else{
        struct Node *temp=current->pointer;
        current->pointer=malloc(sizeof(struct Node));
        current->pointer->value = v;
        current->pointer->pointer=temp;
    }


}

//just delete a certain element  with index n
void delete_node(struct Node *head, int n) {
    struct Node *current = head;

    for(int i=0;i<n;i++){
        current = current->pointer;
        if(current==NULL){
            printf("Node with index %d doesn't exist",n);
            return;
        }

    }
    if(current->pointer->pointer==NULL){
        current->pointer = NULL;
    }else{
        current->pointer=current->pointer->pointer;
    }


}

//print out the value of each element
void print_list(struct Node *head) {
    struct Node *current = head->pointer;

    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->pointer;
    }
}


int main() {
    struct Node *l1 = createList();

    insert_node(l1,0,0);  //0
    insert_node(l1,1,1);  //0 1
    insert_node(l1,2,2);  //0 1 2

    insert_node(l1,3,1);  //0 3 1 2

    delete_node(l1,3);    //0 3 1

    print_list(l1);       //0 3 1

    return 0;
};