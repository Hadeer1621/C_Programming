 /*
 * Name       :   STACK USING LINKED LIST 
 * Author     :   hadeer 
 * Version    :		_1_
 * created on :  13 Nov 2022
 *
 */



#include <stdio.h>
#include <stdlib.h>

// STACK USING LINKED LIST
//==============================================
void display();
void push(int value);
void pop();
//--------------------------------------------
typedef struct node{
   int data;
   struct Node *next;
}Node;

Node *top = NULL ;

//---------------------------------------------
int main()
{
    push(21);
    push(30);
    push(26);
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    return 0;
}
//=====================================================================
void push(int value){

    Node *new_node = malloc(sizeof(Node));
    new_node->data =value;
    if(top == NULL){
        new_node->next=NULL;
    }
    else{
        new_node->next = top;
    }
    top = new_node;
}
//===================================================================
void pop(){
Node *temp = top ;
if(top == NULL){
    printf("Stack is underflow\n");
}
else{
    printf("poped element %d\n",top->data);
    top = top->next;
    free(temp);
}
}
//===================================================================
void display(){
Node *temp = top;
while(temp != NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}
printf("NULL\n");
}
//===================================================================
